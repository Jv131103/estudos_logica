class Produzir {
  static contador = 0; // variável de classe (compartilhada)

  constructor() {
    // toda vez que um objeto é criado, incrementa
    Produzir.contador++;
  }

  toString() {
    return `Criados ${Produzir.contador} objetos`;
  }
}

// Teste
const p1 = new Produzir();
const p2 = new Produzir();
const p3 = new Produzir();

console.log(p3.toString());
