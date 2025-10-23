function crivo_erastotenes(n) {
  // índices 0..n
  const lista = new Array(n + 1).fill(true);
  if (n >= 0) lista[0] = false;
  if (n >= 1) lista[1] = false;

  // peneira até sqrt(n)
  const limite = Math.floor(Math.sqrt(n));
  for (let p = 2; p <= limite; p++) {
    if (lista[p]) {
      let mult = p * p;            // começa em p^2
      while (mult <= n) {          // inclui n
        lista[mult] = false;
        mult += p;
      }
    }
  }

  // coleta primos
  const list_prime = [];
  for (let i = 2; i <= n; i++) {
    if (lista[i]) list_prime.push(i);
  }
  return list_prime;
}

console.log(crivo_erastotenes(30));
