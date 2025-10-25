function maximoSubarray(lista) {
  let somaAtual = lista[0];
  let somaMaxima = lista[0];

  for (let i = 1; i < lista.length; i++) {
    const x = lista[i];

    if (somaAtual + x < x) {
      somaAtual = x;        // recomeça soma
    } else {
      somaAtual = somaAtual + x;  // continua
    }

    if (somaAtual > somaMaxima) {
      somaMaxima = somaAtual;
    }
  }

  return somaMaxima;
}

function maximoSubarrayIndices(lista) {
  let somaAtual = lista[0];
  let somaMaxima = lista[0];
  let iniAtual = 0;
  let iniMax = 0;
  let fimMax = 0;

  for (let i = 1; i < lista.length; i++) {
    const x = lista[i];

    if (somaAtual + x < x) {
      somaAtual = x;
      iniAtual = i;
    } else {
      somaAtual = somaAtual + x;
    }

    if (somaAtual > somaMaxima) {
      somaMaxima = somaAtual;
      iniMax = iniAtual;
      fimMax = i;
    }
  }

  return [somaMaxima, [iniMax, fimMax]];
}


console.log(maximoSubarray([-2, 1, -3, 4, -1, 2, 1, -5, 4]));  // 6
console.log(maximoSubarrayIndices([-2, 1, -3, 4, -1, 2, 1, -5, 4]));  // [6, [3, 6]]
