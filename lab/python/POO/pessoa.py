class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def apresentar(self):
        return f"Olá, meu nome é {self.nome} e eu tenho {self.idade} anos."


# Exemplo de uso
if __name__ == "__main__":
    p = Pessoa("Alice", 30)
    print(p.apresentar())
