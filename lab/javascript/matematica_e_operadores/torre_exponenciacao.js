// torre.js

// ---------- helpers BigInt ----------

const ZERO=0n, ONE=1n;

function gcd(a,b){ while(b){ [a,b]=[b,a%b]; } return a; }

function mulmod(a,b,m){ return (a*b) % m; }

function powmod(a,e,m){
  if (m===ONE) return ZERO;
  a%=m;
  let r=ONE;
  while (e>ZERO){
    if (e & ONE) r = (r*a) % m;
    a = (a*a) % m;
    e >>= ONE;
  }
  return r;
}

function vp(a,p){
  let t=0n;
  if (p===ONE) return {t:0n, aCoprimo:a};
  while (a % p === ZERO){ a/=p; t++; }
  return {t, aCoprimo:a};
}

function phiPrimePower(p,k){
  if (k===0n) return ONE;
  let pk=ONE;
  for (let i=0n;i<k;i++) pk*=p;
  return (p-ONE) * (pk/p);
}

function lambdaPrimePower(p,k){
  if (p!==2n) return phiPrimePower(p,k);
  if (k===1n) return 1n;
  if (k===2n) return 2n;
  return 1n << (k-2n);
}

function invmod(a,m){
  // ext. Euclides
  let r0 = ((a%m)+m)%m, r1=m, s0=1n, s1=0n;
  while (r1){
    const q = r0 / r1;
    [r0,r1] = [r1, r0 - q*r1];
    [s0,s1] = [s1, s0 - q*s1];
  }
  if (r0 !== 1n && r0 !== -1n) throw new Error("inv inexistente");
  if (r0 === -1n) s0 = -s0;
  s0 %= m; if (s0 < 0n) s0 += m;
  return s0;
}

function crtPair(a1,m1,a2,m2){
  const inv = invmod(m1, m2);
  let k = (a2 - a1) % m2; if (k<0n) k+=m2;
  k = (k * inv) % m2;
  const x = (a1 + m1*k) % (m1*m2);
  return [x, m1*m2];
}

function pk(p,k){
  let x=ONE; for (let i=0n;i<k;i++) x*=p; return x;
}

// b^c >= T ?  (T>=1)
function geqPowThreshold(b,c,T){
  if (T<=ONE) return true;
  if (c===ZERO) return 1n >= T;
  let res=ONE, base=b, exp=c;
  while (exp && res < T){
    if (exp & ONE){
      res *= base;
      if (res >= T) return true;
    }
    exp >>= ONE;
    if (exp){
      base = base*base;
      if (base >= T) return true;
    }
  }
  return res >= T;
}

function E_mod_L_with_shift(b,c,L){
  if (L===ONE) return ONE; // evita expoente 0
  let eRed = powmod(b,c,L);
  if (geqPowThreshold(b,c,L)) eRed += L;
  return eRed;
}

function exactPowBounded(b,c,limit){
  // usado apenas quando sabemos que b^c < limit
  let r=ONE, base=b, exp=c;
  while (exp){
    if (exp & ONE) r *= base;
    exp >>= ONE;
    if (exp) base *= base;
  }
  return r; // < limit
}

// ---------- núcleo p^k ----------

function towerModPrimePower(a,b,c,p,k){
  const mod = pk(p,k);
  a %= mod;
  if (mod===ONE) return ZERO;

  const {t, aCoprimo} = vp(a ? a : mod, p);
  if (t >= k) return ZERO; // a ≡ 0 (mod p^k)

  const lam = lambdaPrimePower(p,k);

  if (t===0n){
    const e = E_mod_L_with_shift(b,c,lam);
    return powmod(a,e,mod);
  }

  const T1 = (k + t - 1n) / t; // ceil(k/t)
  if (geqPowThreshold(b,c,T1)) return ZERO;

  const E = exactPowBounded(b,c,T1);
  const pPart = powmod(p, t*E, mod);
  const e2 = E_mod_L_with_shift(b,c,lam);
  const aPart = powmod(aCoprimo % mod, e2, mod);
  return (pPart * aPart) % mod;
}

// ---------- principal ----------

function factorBig(n){
  const P=[], K=[];
  let d=2n;
  while (d*d<=n){
    if (n % d === 0n){
      let k=0n;
      while (n % d === 0n){ n/=d; k++; }
      P.push(d); K.push(k);
    }
    d += (d===2n)?1n:2n;
  }
  if (n>1n){ P.push(n); K.push(1n); }
  return [P,K];
}

function towerMod(a,b,c,m){
  if (m===ONE) return ZERO;
  const [P,K] = factorBig(m);

  let x=0n, M=1n;
  for (let i=0;i<P.length;i++){
    const p=P[i], k=K[i];
    const mi = pk(p,k);
    const ri = towerModPrimePower(a,b,c,p,k);
    if (M===1n){ x=ri; M=mi; }
    else{ [x,M] = crtPair(x,M,ri,mi); }
  }
  return ((x % m) + m) % m;
}

// --------- wrappers práticos ---------

const asBig = n => (typeof n === 'bigint' ? n : BigInt(n));

function towerModNum(a,b,c,m){
  return towerMod(asBig(a), asBig(b), asBig(c), asBig(m));
}

// --------- demo ---------

console.log(String(towerModNum(2,3,4,1000)));       // 352
console.log(String(towerModNum(7,13,5,97)));        // usa λ(97)=96
console.log(String(towerModNum(12,5,3, 1n<<10n)));  // módulo 2^10
