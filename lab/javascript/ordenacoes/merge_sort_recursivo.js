function mergeSort(lista) {
  if (lista.length <= 1) return lista;

  const meio = Math.floor(lista.length / 2);
  const esquerda = mergeSort(lista.slice(0, meio));
  const direita = mergeSort(lista.slice(meio));

  return merge(esquerda, direita);
}

function merge(esquerda, direita) {
  const resultado = [];
  let i = 0, j = 0;

  // Junta as duas metades em ordem
  while (i < esquerda.length && j < direita.length) {
    if (esquerda[i] < direita[j]) {
      resultado.push(esquerda[i]);
      i++;
    } else {
      resultado.push(direita[j]);
      j++;
    }
  }

  // Adiciona o restante (caso sobrem elementos)
  return resultado.concat(esquerda.slice(i)).concat(direita.slice(j));
}

// ---- Testes ----
console.log(mergeSort([8, 3, 5, 2]));        // [2, 3, 5, 8]
console.log(mergeSort([9, 1, 7, 3, 6, 2]));  // [1, 2, 3, 6, 7, 9]
