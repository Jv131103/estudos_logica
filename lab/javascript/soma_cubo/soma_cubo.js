// Função que imprime a decomposição de n³ como soma de ímpares
function somaImparesCubo(m) {
  for (let n = 1; n <= m; n++) {
    let a = n * n - n + 1; // primeiro ímpar da sequência
    let seq = Array.from({ length: n }, (_, k) => a + 2 * k);
    console.log(`${n}^3 = ${seq.join(" + ")}`);
  }
}

// Função que retorna objeto com as sequências
function cuboComImpares(m) {
  let resultado = {};
  for (let n = 1; n <= m; n++) {
    let a = n * n - n + 1; // primeiro ímpar
    let seq = Array.from({ length: n }, (_, k) => a + 2 * k);

    // validação: soma deve ser igual ao cubo
    let soma = seq.reduce((acc, val) => acc + val, 0);
    if (soma !== Math.pow(n, 3)) {
      throw new Error(`Erro: soma incorreta para n=${n}`);
    }

    resultado[n] = seq;
  }
  return resultado;
}

// Testando
console.log(cuboComImpares(4));
somaImparesCubo(4);
