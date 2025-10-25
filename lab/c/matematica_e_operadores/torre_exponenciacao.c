// torre.c
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>

// --------- utilidades aritméticas (64-bit) ---------

static unsigned long long gcd_u64(unsigned long long a, unsigned long long b){
    while (b){ unsigned long long t=a%b; a=b; b=t; }
    return a;
}

// (a*b) % m, evitando overflow com __int128 (GCC/Clang)
static unsigned long long mulmod_u64(unsigned long long a, unsigned long long b, unsigned long long m){
    __int128 x = ( __int128)a * b;
    return (unsigned long long)(x % m);
}

static unsigned long long powmod_u64(unsigned long long a, unsigned long long e, unsigned long long m){
    if (m==1) return 0;
    a %= m;
    unsigned long long r = 1 % m;
    while (e){
        if (e & 1) r = mulmod_u64(r, a, m);
        a = mulmod_u64(a, a, m);
        e >>= 1;
    }
    return r;
}

// v_p(a): potência de p que divide a, retornando (t, a')
static unsigned long long vp(unsigned long long a, unsigned long long p, unsigned *t, unsigned long long *acoprimo){
    unsigned ct = 0;
    if (p == 1){ *t=0; *acoprimo=a; return a; }
    while (a % p == 0){
        a /= p; ct++;
    }
    *t = ct; *acoprimo = a;
    return a;
}

// fatoração por tentativa (suficiente para exercício)
static unsigned factor_u64(unsigned long long n, unsigned long long P[], unsigned K[], unsigned cap){
    unsigned cnt=0;
    for (unsigned long long d=2; d*d<=n; d += (d==2?1:2)){
        if (n % d == 0){
            unsigned k=0;
            while (n % d == 0){ n/=d; k++; }
            if (cnt<cap){ P[cnt]=d; K[cnt]=k; cnt++; }
        }
    }
    if (n>1 && cnt<cap){ P[cnt]=n; K[cnt]=1; cnt++; }
    return cnt;
}

// φ(p^k)
static unsigned long long phi_prime_power(unsigned long long p, unsigned k){
    if (k==0) return 1;
    unsigned long long pk=1;
    for (unsigned i=0;i<k;i++) pk*=p;
    return (p-1)* (pk/p);
}

// λ(p^k) (Carmichael)
static unsigned long long lambda_prime_power(unsigned long long p, unsigned k){
    if (p!=2) return phi_prime_power(p,k);
    if (k==1) return 1;
    if (k==2) return 2;
    return 1ULL << (k-2); // 2^(k-2)
}

// inverso modular (m1, m2 coprimos)
static long long invmod_ll(long long a, long long m){
    long long r0=a%m, r1=m, s0=1, s1=0;
    while (r1){
        long long q = r0 / r1;
        long long r2 = r0 - q*r1; r0=r1; r1=r2;
        long long s2 = s0 - q*s1; s0=s1; s1=s2;
    }
    if (r0!=1 && r0!=-1) return -1; // sem inverso
    if (r0==-1) s0 = -s0;
    long long x = s0 % m; if (x<0) x+=m; return x;
}

static void crt_pair(
    unsigned long long a1, unsigned long long m1,
    unsigned long long a2, unsigned long long m2,
    unsigned long long *x_out, unsigned long long *M_out
){
    long long inv = invmod_ll((long long)m1, (long long)m2);
    // x = a1 + m1 * ((a2 - a1) * inv mod m2)
    unsigned long long k = ( ( (a2>=a1)?(a2-a1) : (m2 - ((a1-a2)%m2)) ) );
    k = (unsigned long long)( ( (__int128)k * inv ) % m2 );
    unsigned long long x = (a1 + (__int128)m1 * k) % (m1*m2);
    *x_out = x; *M_out = m1*m2;
}

// b^c >= T ?  (T>=1)  — para comparar sem expandir b^c
static int geq_pow_threshold_u64(unsigned long long b, unsigned long long c, unsigned long long T){
    if (T<=1) return 1;
    if (c==0) return (1 >= T) ? 1 : 0;
    // exponenciação rápida com “cap” em T
    __int128 res = 1, base = b;
    unsigned long long exp = c;
    while (exp && res < T){
        if (exp & 1){
            res *= base;
            if (res >= T) return 1;
        }
        exp >>= 1;
        if (exp){
            base = base*base;
            if (base >= T) return 1;
        }
    }
    return (res >= T) ? 1 : 0;
}

// E mod L com "shift" se E >= L
static unsigned long long E_mod_L_with_shift(
    unsigned long long b, unsigned long long c,
    unsigned long long L
){
    if (L==1) return 1; // qualquer coisa ≡ 0; usamos 1*L para evitar expoente 0
    unsigned long long e_red = powmod_u64(b, c, L); // b^c mod L
    if (geq_pow_threshold_u64(b, c, L)) e_red += L; // garante não 0 quando E>=L
    return e_red;
}

// potência de primo p^k (cabe em 64-bit pois divide m)
static unsigned long long pk_u64(unsigned long long p, unsigned k){
    unsigned long long x=1;
    for (unsigned i=0;i<k;i++) x*=p;
    return x;
}

// E exato (b^c), assumindo E < limit (limit pequeno, e.g., ceil(k/t))
static unsigned long long exact_pow_bounded(unsigned long long b, unsigned long long c, unsigned long long limit){
    unsigned long long r=1, base=b;
    while (c){
        if (c & 1){
            // r *= base, garantindo r<limit (pela lógica de chamada)
            r *= base;
        }
        c >>= 1;
        if (c) base *= base;
    }
    return r; // < limit garantido pelo chamador
}

// --------- núcleo por potência prima ---------

static unsigned long long tower_mod_prime_power(
    unsigned long long a, unsigned long long b, unsigned long long c,
    unsigned long long p, unsigned k
){
    unsigned long long mod = pk_u64(p, k);
    a %= mod;
    if (mod==1) return 0ULL;

    unsigned t=0; unsigned long long a_coprimo=0;
    vp(a ? a : mod, p, &t, &a_coprimo);
    if (t >= k) return 0ULL; // a ≡ 0 (mod p^k)

    unsigned long long lam = lambda_prime_power(p, k);

    if (t == 0){
        // coprimos
        unsigned long long e = E_mod_L_with_shift(b, c, lam);
        return powmod_u64(a, e, mod);
    }

    // t > 0
    unsigned long long T1 = (k + t - 1) / t; // ceil(k/t)
    if (geq_pow_threshold_u64(b, c, T1)) return 0ULL;

    // E < T1: podemos obter E exatamente
    unsigned long long E = exact_pow_bounded(b, c, T1);
    unsigned long long p_part = powmod_u64(p, (unsigned long long)t * E, mod);
    unsigned long long e2 = E_mod_L_with_shift(b, c, lam);
    unsigned long long a_part = powmod_u64(a_coprimo % mod, e2, mod);
    return mulmod_u64(p_part, a_part, mod);
}

// --------- função principal: CRT sobre p^k ---------

unsigned long long tower_mod_u64(unsigned long long a, unsigned long long b, unsigned long long c, unsigned long long m){
    if (m==1) return 0ULL;
    unsigned long long P[64]; unsigned K[64];
    unsigned sz = factor_u64(m, P, K, 64);

    unsigned long long x = 0, M = 1;
    for (unsigned i=0;i<sz;i++){
        unsigned long long pi = P[i];
        unsigned ki = K[i];
        unsigned long long mi = pk_u64(pi, ki);
        unsigned long long ri = tower_mod_prime_power(a, b, c, pi, ki);

        if (M==1){ x = ri; M = mi; }
        else{
            unsigned long long nx, nM;
            crt_pair(x, M, ri, mi, &nx, &nM);
            x = nx; M = nM;
        }
    }
    return x % m;
}

// ------------------ demo ------------------

int main(void){
    printf("%llu\n", tower_mod_u64(2, 3, 4, 1000));      // 2^(81) mod 1000 = 352
    printf("%llu\n", tower_mod_u64(7, 13, 5, 97));       // usa λ(97)=96
    printf("%llu\n", tower_mod_u64(12, 5, 3, 1ULL<<10)); // módulo 2^10
    // Exemplo pedido: você pode testar outros a,b,c,m
    return 0;
}
