function maior(lista, i = 0) {
  if (!lista || lista.length === 0) return null;

  if (i === lista.length - 1) {
    return lista[i];
  } else {
    const maiorResto = maior(lista, i + 1);
    return lista[i] > maiorResto ? lista[i] : maiorResto;
  }
}

// Testes
console.log(maior([3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5])); // 9
console.log(maior([-10, -20, -3, -4])); // -3
console.log(maior([42])); // 42
console.log(maior([0, -1, 1])); // 1
console.log(maior([7, 7, 7, 7])); // 7
console.log(maior([])); // null
