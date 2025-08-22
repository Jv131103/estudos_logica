function fatoresPrimos(n) {
  let fatores = {};
  let divisor = 2;

  while (n > 1) {
    let multiplicidade = 0;
    while (n % divisor === 0) {
      n = Math.floor(n / divisor);
      multiplicidade++;
    }
    if (multiplicidade > 0) {
      fatores[divisor] = multiplicidade;
    }
    divisor++;
  }

  return fatores;
}

// Exemplos de uso
console.log(fatoresPrimos(60)); // { '2': 2, '3': 1, '5': 1 }
console.log(fatoresPrimos(84)); // { '2': 2, '3': 1, '7': 1 }
