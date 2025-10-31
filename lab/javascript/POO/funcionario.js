// Classe base
class Funcionario {
  constructor(nome) {
    this.nome = nome;
    this.cargo = "Funcionário";
    this.salario = 0.0;
  }

  getCargo() {
    console.log(`Cargo do funcionário ${this.nome}: ${this.cargo}`);
  }

  calcularBonus() {
    // método genérico — sobrescrito nas subclasses
    return 0;
  }
}

// Subclasse Gerente
class Gerente extends Funcionario {
  constructor(nome, salario) {
    super(nome);
    this.cargo = "Gerente";
    this.salario = salario;
  }

  calcularBonus() {
    return this.salario + this.salario * 0.1;
  }
}

// Subclasse Diretor
class Diretor extends Funcionario {
  constructor(nome, salario) {
    super(nome);
    this.cargo = "Diretor";
    this.salario = salario;
  }

  calcularBonus() {
    return this.salario + this.salario * 0.2;
  }
}

// Subclasse Estagiário
class Estagiario extends Funcionario {
  constructor(nome, salario) {
    super(nome);
    this.cargo = "Estagiário";
    this.salario = salario;
  }

  calcularBonus() {
    return this.salario + this.salario * 0.05;
  }
}

// ----------- Teste -----------
const f1 = new Funcionario("João");
const g1 = new Gerente("Maria", 5000);
const d1 = new Diretor("Carlos", 10000);
const e1 = new Estagiario("Pedro", 2500);

f1.getCargo();
g1.getCargo();
d1.getCargo();
e1.getCargo();

console.log(`${g1.nome} receberá bônus de: R$ ${g1.calcularBonus().toFixed(2)}`);
console.log(`${d1.nome} receberá bônus de: R$ ${d1.calcularBonus().toFixed(2)}`);
console.log(`${e1.nome} receberá bônus de: R$ ${e1.calcularBonus().toFixed(2)}`);
