function is_par_or_impar(num) {
  // Retorna 'Par' se num é par, 'Impar' se num é ímpar, ou 'Não é inteiro' caso contrário.
  if (typeof num === "boolean") {
    return "Não é inteiro";
  }

  if (typeof num !== "number" || !Number.isFinite(num)) {
    return "Não é inteiro";
  }

  if (!Number.isInteger(num)) {
    return "Não é inteiro";
  }

  return num % 2 === 0 ? "Par" : "Impar";
}

function testes() {
  // Testes com inteiros
  for (let i = -5; i <= 5; i++) {
    console.log(`${i}: ${is_par_or_impar(i)}`);
  }

  // Testes com decimais, strings e booleanos
  const decimais = [-3.5, -2.0, 0.0, 4.2, 7.7, "salve", true, null];
  for (let n of decimais) {
    console.log(`${n}: ${is_par_or_impar(n)}`);
  }
}

testes();
