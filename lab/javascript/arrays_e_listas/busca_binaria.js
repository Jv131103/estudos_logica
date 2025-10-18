function buscaBinaria(lista, valor) {
  // É importante ordenar antes da busca
  lista.sort((a, b) => a - b);

  let esquerda = 0;
  let direita = lista.length - 1;

  while (esquerda <= direita) {
    const meio = Math.floor((esquerda + direita) / 2);

    if (lista[meio] === valor) {
      return meio;
    } else if (valor < lista[meio]) {
      direita = meio - 1;
    } else {
      esquerda = meio + 1;
    }
  }

  return -1; // não encontrado
}

const lista = [10, 2, 8, 4, 6];
const valor = 6;
console.log("Posição:", buscaBinaria(lista, valor));
