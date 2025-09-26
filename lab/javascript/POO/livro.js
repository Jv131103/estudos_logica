class Livro {
    constructor(titulo, autor, ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }

    toString() {
        return `'${this.titulo}' por ${this.autor}, publicado em ${this.ano}`;
    }
}

class Biblioteca {
    constructor(nome){
        this.nome = nome;
        this.livros = [];
    }

    adicionarLivro(livro) {
        if (!this.livros.includes(livro)) {
            this.livros.push(livro);
        } else {
            console.log("Livro já existe na biblioteca.");
        }
    }

    listarLivros() {
        return this.livros.map(livro => livro.toString()).join('\n');
    }

    removerLivro(titulo) {
        for (let i = 0; i < this.livros.length; i++) {
            if (this.livros[i].titulo === titulo) {
                this.livros.splice(i, 1);
                return `Livro '${titulo}' removido.`;
            }
        }
        return `Livro '${titulo}' não encontrado.`;
    }
}


livro1 = new Livro("1984", "George Orwell", 1949);
livro2 = new Livro("To Kill a Mockingbird", "Harper Lee", 1960);
livro3 = new Livro("The Great Gatsby", "F. Scott Fitzgerald", 1925);

biblioteca = new Biblioteca("Biblioteca Central");

biblioteca.adicionarLivro(livro1);
biblioteca.adicionarLivro(livro2);
biblioteca.adicionarLivro(livro3);

console.log(biblioteca.listarLivros());

console.log(biblioteca.removerLivro("1984"));
console.log(biblioteca.listarLivros());

console.log(biblioteca.removerLivro("1984"));
console.log(biblioteca.listarLivros());
