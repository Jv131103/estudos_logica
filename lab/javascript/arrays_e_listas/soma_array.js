class ArrayCustom {
  constructor(tamanho) {
    this.tamanho = tamanho;
    this.array = [];
  }

  toString() {
    return `ArrayCustom(${JSON.stringify(this.array)})`;
  }

  add(n) {
    if (this.array.length >= this.tamanho) {
      throw new Error("Limite máximo atingido para o array");
    }
    this.array.push(n);
  }

  delete() {
    if (this.array.length <= 0) {
      throw new Error("Lista vazia para remover");
    }
    this.array.pop();
  }

  sumArray() {
    return this.array.reduce((a, b) => a + b, 0);
  }
}

// -------------------- Teste --------------------
const lista = new ArrayCustom(5);

for (let i = 1; i <= 5; i++) {
  lista.add(i);
}

console.log("Array:", lista.toString());
console.log("Soma dos elementos:", lista.sumArray());

try {
  lista.add(6);
} catch (e) {
  console.log("Erro esperado:", e.message);
}

lista.delete();
console.log("Após remover um elemento:", lista.toString());
console.log("Soma atual:", lista.sumArray());
