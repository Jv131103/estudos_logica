function soma_digitos(numero) {
  numero = Math.abs(numero);
  let soma = 0;

  while (numero > 0) {
    const resto = numero % 10;
    soma += resto;
    numero = Math.floor(numero / 10);
  }

  return soma;
}

// -------------------- Testes --------------------
const testes = [432, 12345, 0, 908, -32, -1, 1000];
for (const teste of testes) {
  console.log(soma_digitos(teste));
}
