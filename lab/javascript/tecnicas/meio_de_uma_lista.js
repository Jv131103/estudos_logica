function findMiddle(lista) {
  return Math.floor((lista.length - 1) / 2);
}

const lista = [1, 2, 3, 4, 5, 6];
const middle = findMiddle(lista);

console.log("Índice do meio:", middle);
console.log("Elemento do meio:", lista[middle]);
