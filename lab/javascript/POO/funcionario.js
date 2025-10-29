// Classe base
class Funcionario {
  constructor(nome) {
    this.nome = nome;
    this.cargo = "Funcionário";
  }

  getCargo() {
    return `Cargo do funcionário ${this.nome}: ${this.cargo}`;
  }
}

// Subclasse com herança e sobrescrita
class Gerente extends Funcionario {
  constructor(nome) {
    super(nome);         // “chama” o construtor da base
    this.cargo = "Gerente";
  }

  // sobrescrevendo o método
  getCargo() {
    return `Cargo do funcionário ${this.nome}: ${this.cargo}`;
  }
}


const f1 = new Funcionario("João");
console.log(f1.getCargo());

const g1 = new Gerente("Maria");
console.log(g1.getCargo());
