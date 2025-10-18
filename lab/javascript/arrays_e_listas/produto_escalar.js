function produto_escalar(v1, v2) {
  if (v1.length !== v2.length) {
    throw new Error("Vetores precisam ter o mesmo tamanho");
  }

  let soma = 0;
  for (let i = 0; i < v1.length; i++) {
    soma += v1[i] * v2[i];
  }
  return soma;
}

function produto_escalar2(v1, v2) {
  if (v1.length !== v2.length) {
    throw new Error("Vetores precisam ter o mesmo tamanho");
  }
  return v1.reduce((acc, val, i) => acc + val * v2[i], 0);
}

// -------------------- Teste --------------------
console.log(produto_escalar([1, 2, 3], [4, 5, 6]));   // 32
console.log(produto_escalar2([1, 2, 3], [4, 5, 6]));  // 32
