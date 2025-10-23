function modPow(a, b, m) {
  if (m === 1) return 0;
  a = ((a % m) + m) % m;
  let res = 1 % m;
  while (b > 0) {
    if (b & 1) res = (res * a) % m;
    a = (a * a) % m;
    b = Math.floor(b / 2);
  }
  return res;
}


function modPowBig(a, b, m) {
  a = BigInt(a);
  b = BigInt(b);
  m = BigInt(m);
  if (m === 1n) return 0n;
  a = ((a % m) + m) % m;
  let res = 1n;
  while (b > 0n) {
    if (b & 1n) res = (res * a) % m;
    a = (a * a) % m;
    b >>= 1n;
  }
  return res;
}


console.log(modPow(3, 13, 7)); // 3
console.log(String(modPowBig(3n, 13n, 7n))); // "3"
