function inverter1(lista) {
  if (!lista || lista.length === 0) return null;
  return [...lista].reverse(); // copia e inverte
}

function inverter2(lista) {
  if (!lista || lista.length === 0) return null;
  const reverso = [];
  for (let i = lista.length - 1; i >= 0; i--) {
    reverso.push(lista[i]);
  }
  return reverso;
}

function inverter3(lista) {
  if (!lista || lista.length === 0) return null;
  const arr = [...lista]; // cria cópia para não modificar original
  const tamanho = arr.length;

  for (let i = 0; i < Math.floor(tamanho / 2); i++) {
    const temp = arr[i];
    arr[i] = arr[tamanho - 1 - i];
    arr[tamanho - 1 - i] = temp;
  }

  return arr;
}

function inverter4(lista) {
  if (!lista || lista.length === 0) return null;
  return lista.slice().reverse(); // mesma ideia do slicing Python [::-1]
}

// -------------------- Teste --------------------
const lista = [1, 2, 3, 4];
console.log(inverter1(lista));
console.log(inverter2(lista));
console.log(inverter3(lista));
console.log(inverter4(lista));
