class Pessoa{
    constructor(nome, idade){
        this.nome = nome;
        this.idade = idade;
    }

    apresentar(){
        console.log(`Olá, meu nome é ${this.nome} e tenho ${this.idade} anos.`);
    }
}


function Main(){
    const p = new Pessoa("João", 30);
    p.apresentar();
}

Main();
