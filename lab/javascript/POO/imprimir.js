class Imprimivel {
  imprimir() {
    throw new Error("O método 'imprimir()' deve ser implementado!");
  }
}

class Relatorio extends Imprimivel {
  constructor(nome, data, descricao) {
    super();
    this.nome = nome;
    this.data = data;
    this.descricao = descricao;
  }

  imprimir() {
    console.log(`Nome do relatório: ${this.nome}`);
    console.log(`Data de Criação: ${this.data}`);
    console.log(`Descrição: ${this.descricao}`);
  }
}

class Etiqueta extends Imprimivel {
  constructor(nome, data, descricao) {
    super();
    this.nome = nome;
    this.data = data;
    this.descricao = descricao;
  }

  imprimir() {
    console.log(`Nome da etiqueta: ${this.nome}`);
    console.log(`Data de Criação: ${this.data}`);
    console.log(`Descrição: ${this.descricao}`);
  }
}

const r = new Relatorio("Confidencial 151 - Fenômeno", "31/10/1995", "SEM REGISTRO");
r.imprimir();
console.log();
const e = new Etiqueta("Lembrete de estudo", "31/10/2025", "Estudar lógica");
e.imprimir();
