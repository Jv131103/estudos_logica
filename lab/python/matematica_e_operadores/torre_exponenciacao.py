from math import gcd

# --- potências e auxiliares ---------------------------------


def powmod(a, e, m):
    a %= m
    r = 1
    while e > 0:
        if e & 1:
            r = (r * a) % m
        a = (a * a) % m
        e >>= 1
    return r


def geq_pow_threshold(b, c, T):
    """Retorna True se b^c >= T, sem calcular b^c por completo.
       Para T<=1, retorna True (qualquer b^c >=1)."""
    if T <= 1:
        return True
    if c == 0:
        return 1 >= T
    # expo rápido com “cap” em T
    res = 1
    base = b
    exp = c
    while exp > 0 and res < T:
        if exp & 1:
            res *= base
            if res >= T:
                return True
        exp >>= 1
        if exp > 0:
            # evita crescer demais: se base já ultrapassa sqrt(T),
            # próximo quadrado certamente excede T
            if base >= T:
                return True
            base_sq = base * base
            if base_sq >= T and exp:  # ainda haverá uso
                return True
            base = base_sq
    return res >= T


# --- fatoração e funções aritméticas -------------------------

def factor(n):
    """Fatoração por divisão tentativa (suficiente para exercício)."""
    f = []
    d = 2
    while d * d <= n:
        if n % d == 0:
            k = 0
            while n % d == 0:
                n //= d
                k += 1
            f.append((d, k))
        d += 1 if d == 2 else 2  # 2 e depois ímpares
    if n > 1:
        f.append((n, 1))
    return f


def vp(a, p):
    """Expoente de p em a (v_p)."""
    t = 0
    while a % p == 0:
        a //= p
        t += 1
    return t, a


def phi_prime_power(p, k):
    if k == 0:
        return 1
    return (p - 1) * (p ** (k - 1))


def lambda_prime_power(p, k):
    # Carmichael:
    # - p ímpar: λ(p^k) = φ(p^k)
    # - p = 2: λ(2)=1, λ(4)=2, λ(2^k)=2^{k-2} para k>=3
    if p != 2:
        return phi_prime_power(p, k)
    if k == 1:
        return 1
    if k == 2:
        return 2
    return 1 << (k - 2)


def lcm(a, b):
    return a // gcd(a, b) * b


def carmichael_lambda(n):
    """λ(n) por fatoração em potências primas e MMC das λ(p^k)."""
    lam = 1
    for p, k in factor(n):
        lam = lcm(lam, lambda_prime_power(p, k))
    return lam


# --- CRT para módulos coprimos -------------------------------

def invmod(a, m):
    # extensão de Euclides (m e a coprimos)
    r0, r1 = a % m, m
    s0, s1 = 1, 0
    while r1:
        q = r0 // r1
        r0, r1 = r1, r0 - q * r1
        s0, s1 = s1, s0 - q * s1
    if r0 != 1:
        raise ValueError("inv inexistente")
    return s0 % m


def crt_pair(a1, m1, a2, m2):
    """Resolve x≡a1 (mod m1), x≡a2 (mod m2), com m1,m2 coprimos."""
    inv = invmod(m1, m2)
    k = (a2 - a1) * inv % m2
    x = a1 + m1 * k
    return x, m1 * m2


# --- núcleo por potência prima -------------------------------

def tower_mod_prime_power(a, b, c, p, k):
    mod = p ** k
    a %= mod
    if mod == 1:
        return 0

    t, a_coprime = vp(a if a != 0 else mod, p)  # v_p(a), a' coprimo a p
    # Se a==0 mod p^k, já é 0
    if t >= k:
        return 0

    # Precisaremos comparar E=b^c contra thresholds:
    # T1 = ceil(k/t) (para decidir se p^{tE} zera), se t>0
    # T2 = λ(p^k) (para redução do expoente na parte coprima)
    lam = lambda_prime_power(p, k)

    # Funções para E:
    def E_geq(T):
        return geq_pow_threshold(b, c, T)

    def E_mod_L_with_shift(L):
        # e_red = E mod L
        e_red = powmod(b, c, L)
        # se E >= L, somamos L para evitar expoente 0 em casos grandes
        if E_geq(L):
            e_red += L
        return e_red

    if t == 0:
        # coprimos com p^k
        e = E_mod_L_with_shift(lam)
        return powmod(a, e, mod)

    # t>0: separa a = p^t * a_coprime
    T1 = (k + t - 1) // t  # ceil(k/t)
    if E_geq(T1):
        return 0  # p^{tE} >= p^k

    # senão, calculamos p^{tE} * (a')^E mod p^k
    # precisamos de E "inteiro" em dois lugares:
    # - potência de p: t*E (aqui basta saber valor exato até ser pequeno)
    # - expoente de a_coprime reduzido por lam (com shift)
    # E pode ser pequeno (já que não atingiu T1). Vamos obtê-lo de forma exata,
    # mas com early stop: como T1 é o limite,
    # calcular b^c exatamente (é pequeno).
    # Para segurança, construímos por exponenciação rápida sem módulo.
    def exact_pow(b, c):
        r, base, exp = 1, b, c
        while exp > 0:
            if exp & 1:
                r *= base
            base *= base
            exp >>= 1
        return r

    E = exact_pow(b, c)  # seguro pois E < T1 e T1 <= ~k/t
    p_part = powmod(p, t * E, mod)
    e2 = E_mod_L_with_shift(lam)  # redução segura p/ a' coprimo
    a_part = powmod(a_coprime % mod, e2, mod)
    return (p_part * a_part) % mod


# --- função principal ----------------------------------------

def tower_mod(a, b, c, m):
    if m == 1:
        return 0
    # fatora m e resolve por CRT
    residues = []
    moduli = []
    for p, k in factor(m):
        r = tower_mod_prime_power(a, b, c, p, k)
        residues.append(r)
        moduli.append(p ** k)

    # junta com CRT
    x, M = residues[0], moduli[0]
    for r, mod in zip(residues[1:], moduli[1:]):
        x, M = crt_pair(x, M, r, mod)
    return x % m


# ----------------- exemplos rápidos --------------------------
if __name__ == "__main__":
    # Exemplos clássicos
    print(tower_mod(2, 3, 4, 1000))     # 2^(81) mod 1000 -> 352
    print(tower_mod(7, 13, 5, 97))      # (coprimos) usa λ(97)=96
    print(tower_mod(12, 5, 3, 2**10))   # m potência de 2 e a múltiplo de 2
