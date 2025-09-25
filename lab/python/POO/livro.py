class Livro:
    def __init__(self, titulo, autor, ano_publicacao):
        self.titulo = titulo
        self.autor = autor
        self.ano_publicacao = ano_publicacao

    def __repr__(self):
        return (
            f"'{self.titulo}' por {self.autor}, "
            f"publicado em {self.ano_publicacao}"
        )


class Biblioteca:
    def __init__(self, nome) -> None:
        self.nome = nome
        self.livros = []

    def adicionar_livro(self, livro):
        if livro not in self.livros:
            self.livros.append(livro)
        else:
            print(f"O livro '{livro.titulo}' já está na biblioteca.")

    def listar_livros(self):
        if not self.livros:
            return f"Nenhum livro na biblioteca {self.nome}."
        linhas = [f"Livros na biblioteca {self.nome}:"]
        for livro in self.livros:
            linhas.append(str(livro))
        return "\n".join(linhas)

    def buscar_por_titulo(self, titulo):
        return [
            livro for livro in self.livros
            if titulo.lower() in livro.titulo.lower()
        ]

    def remover_livro(self, titulo):
        for livro in self.livros:
            if livro.titulo.lower() == titulo.lower():
                self.livros.remove(livro)
                return f"Livro '{titulo}' removido."
        return f"Livro '{titulo}' não encontrado."


# Exemplo de uso
if __name__ == "__main__":
    livro1 = Livro("1984", "George Orwell", 1949)
    livro2 = Livro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954)

    print(livro1)
    print(livro2)

    biblioteca = Biblioteca("Biblioteca Central")

    biblioteca.adicionar_livro(livro1)
    biblioteca.adicionar_livro(livro2)
    print(biblioteca.listar_livros())

    print(biblioteca.buscar_por_titulo("1984"))
    print(biblioteca.remover_livro("1984"))
    print(biblioteca.listar_livros())
