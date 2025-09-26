class Aluno {
    constructor(nome) {
        this.nome = nome;
        this.notas = [];
    }

    adicionarNota(nota) {
        this.notas.push(nota);
    }

    calcularMedia() {
        if (this.notas.length === 0) return 0;
        let soma = this.notas.reduce((acc, n) => acc + n, 0);
        return soma / this.notas.length;
    }

    aprovado() {
        return this.calcularMedia() >= 6;
    }

    toString() {
        return `Aluno: ${this.nome}, Notas: [${this.notas.join(", ")}], Média: ${this.calcularMedia().toFixed(2)}`;
    }
}

// Testes
let aluno1 = new Aluno("Maria");
aluno1.adicionarNota(7);
aluno1.adicionarNota(8);
aluno1.adicionarNota(6);
console.log(aluno1.toString());
console.log(aluno1.aprovado());

console.log();

let aluno2 = new Aluno("João");
aluno2.adicionarNota(5);
aluno2.adicionarNota(4);
aluno2.adicionarNota(6);
console.log(aluno2.toString());
console.log(aluno2.aprovado());
