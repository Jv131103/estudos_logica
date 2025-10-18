function merge(esquerda, direita) {
  const resultado = [];
  let i = 0, j = 0;

  while (i < esquerda.length && j < direita.length) {
    if (esquerda[i] < direita[j]) {
      resultado.push(esquerda[i++]);
    } else {
      resultado.push(direita[j++]);
    }
  }
  // cola o resto
  return resultado.concat(esquerda.slice(i)).concat(direita.slice(j));
}

function merge_sort_iterativo(lista) {
  const n = lista.length;
  let tamanho = 1; // blocos de 1

  while (tamanho < n) {
    for (let i = 0; i < n; i += 2 * tamanho) {
      const meio = i + tamanho;
      const fim = Math.min(i + 2 * tamanho, n);
      const esquerda = lista.slice(i, Math.min(meio, n));
      const direita  = lista.slice(Math.min(meio, n), fim);
      const merged = merge(esquerda, direita);
      // substitui o trecho [i, fim) pelo merge
      lista.splice(i, fim - i, ...merged);
    }
    tamanho *= 2;
  }
  return lista;
}

// ---- teste
let valores = [8, 3, 5, 2, 9, 1];
console.log("Antes:", valores.slice());
console.log("Depois:", merge_sort_iterativo(valores));
