function busca_binaria_recursiva(lista, valor, inicio = 0, fim = null) {
  if (fim === null) {
    fim = lista.length - 1;
  }

  if (inicio > fim) {
    return -1;
  }

  const meio = Math.floor((inicio + fim) / 2);

  if (lista[meio] === valor) {
    return meio;
  } else if (lista[meio] < valor) {
    return busca_binaria_recursiva(lista, valor, meio + 1, fim);
  } else {
    return busca_binaria_recursiva(lista, valor, inicio, meio - 1);
  }
}

// Teste
let lista = [10, 2, 8, 4, 6];
lista.sort((a, b) => a - b); // ordenar crescente
const valor = 6;

console.log("Lista:", lista);
console.log("Posição:", busca_binaria_recursiva(lista, valor));
