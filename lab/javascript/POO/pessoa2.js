class Pessoa{
    constructor(nome, idade){
        this.nome = nome;
        this.idade = idade;
    }

    info(){
        return `Nome: ${this.nome}, Idade: ${this.idade}`;
    }

    apresentar(){
        console.log(`Olá meu nome é ${self.nome}`);
    }
}

p = new Pessoa("João", 21)
console.log(p.info())
p.apresentar()
