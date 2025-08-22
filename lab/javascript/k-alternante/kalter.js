function kAlternante(numeros, k = 1) {
  const n = numeros.length;

  // 1) Checar divisibilidade (ou se é 1 bloco só)
  if (n % k !== 0 && k !== n) {
    return false;
  }

  // 2) Dividir em blocos de tamanho k
  let blocos = [];
  for (let i = 0; i < n; i += k) {
    blocos.push(numeros.slice(i, i + k));
  }

  // 3) Checar uniformidade dentro de cada bloco
  function paridade(x) {
    return x % 2;
  }

  let paridadesBlocos = [];
  for (let bloco of blocos) {
    let p = paridade(bloco[0]);
    if (bloco.some(x => paridade(x) !== p)) {
      return false;
    }
    paridadesBlocos.push(p);
  }

  // 4) Checar alternância entre blocos
  for (let i = 1; i < paridadesBlocos.length; i++) {
    if (paridadesBlocos[i] === paridadesBlocos[i - 1]) {
      return false;
    }
  }

  return true;
}

// Testes
console.log(kAlternante([1, 3, 6, 8, 9, 11, 2, 4, 1, 7, 6, 8], 2)); // true
console.log(kAlternante([1, 3, 5], 3));                             // true
console.log(kAlternante([1, 3, 5, 7, 9, 11], 2));                   // false
console.log(kAlternante([2, 4, 6, 8], 2));                          // false
