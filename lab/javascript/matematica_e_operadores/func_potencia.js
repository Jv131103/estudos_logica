function potencia1(base, expoente) {
  // caso especial: 0^0 é indefinido
  if (base === 0 && expoente === 0) {
    return "Indefinido (0^0)";
  }

  // expoente zero -> retorna 1
  if (expoente === 0) {
    return 1;
  }

  let resultado = 1;
  const exp = Math.abs(expoente);

  for (let i = 0; i < exp; i++) {
    resultado *= base;
  }

  // se expoente for negativo -> inverte o resultado
  if (expoente < 0) {
    return 1 / resultado;
  }

  return resultado;
}

function potencia2(base, expoente) {
  return base ** expoente;
}

// -------------------- Testes --------------------
console.log(potencia1(2, 5));    // 32
console.log(potencia1(-2, 3));   // -8
console.log(potencia1(-2, 2));   // 4
console.log(potencia1(2, -3));   // 0.125
console.log(potencia1(5, 0));    // 1
console.log(potencia1(0, 0));    // Indefinido
console.log(potencia1(0, 3));    // 0
console.log();
console.log(potencia2(2, 5));    // 32
console.log(potencia2(-2, 3));   // -8
console.log(potencia2(-2, 2));   // 4
console.log(potencia2(2, -3));   // 0.125
console.log(potencia2(5, 0));    // 1
console.log(potencia2(0, 0));    // 1
console.log(potencia2(0, 3));    // 0
