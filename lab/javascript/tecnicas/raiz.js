function raiz(indice = 2, radicando = 0, casas_decimais = null) {
  indice = Math.abs(indice);
  radicando = Math.abs(radicando);
  const resultado = Math.pow(radicando, 1 / indice);
  return casas_decimais !== null
    ? Number(resultado.toFixed(casas_decimais))
    : resultado;
}

function raiz_newton(n, x, precisao = 1e-7, casas_decimais = null) {
  let r = x / 2; // chute inicial
  while (true) {
    const novo_r = (1 / n) * ((n - 1) * r + x / Math.pow(r, n - 1));
    if (Math.abs(novo_r - r) < precisao) {
      return casas_decimais !== null
        ? Number(novo_r.toFixed(casas_decimais))
        : novo_r;
    }
    r = novo_r;
  }
}

function raiz_busca_binaria(n, x, precisao = 1e-7, casas_decimais = null) {
  let baixo = 0;
  let alto = Math.max(1, x);
  while (alto - baixo > precisao) {
    const meio = (baixo + alto) / 2;
    if (Math.pow(meio, n) < x) {
      baixo = meio;
    } else {
      alto = meio;
    }
  }
  const resultado = (baixo + alto) / 2;
  return casas_decimais !== null
    ? Number(resultado.toFixed(casas_decimais))
    : resultado;
}

// -------------------- Testes --------------------
console.log(raiz(2, 4));           // 2
console.log(raiz(3, 9, 2));        // 2.08
console.log(raiz(4, 12, 2));       // 1.86
console.log();
console.log(raiz_newton(2, 4, 1e-7, 2));  // 2.00
console.log(raiz_newton(3, 9, 1e-7, 2));  // 2.08
console.log(raiz_newton(4, 12, 1e-7, 2)); // 1.86
console.log();
console.log(raiz_busca_binaria(2, 4, 1e-7, 2)); // 2.00
console.log(raiz_busca_binaria(3, 9, 1e-7, 2)); // 2.08
