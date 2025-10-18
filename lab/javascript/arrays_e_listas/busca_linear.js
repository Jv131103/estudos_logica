function busca_linear1(lista, valor) {
  for (let i = 0; i < lista.length; i++) {
    if (lista[i] === valor) {
      return i;
    }
  }
  return -1;
}

function busca_linear2(lista, valor) {
  let i = 0;
  for (const item of lista) {
    if (item === valor) {
      return i;
    }
    i++;
  }
  return -1;
}

// Teste
const lista = [2, 4, 6, 8, 10];
const valor = 6;

console.log("Posição:", busca_linear1(lista, valor));
console.log("Posição:", busca_linear2(lista, valor));
