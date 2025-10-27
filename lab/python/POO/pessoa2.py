class Pessoa:
    def __init__(self, nome, idade) -> None:
        self.nome = nome
        self.idade = idade

    def __repr__(self) -> str:
        return f"Nome: {self.nome}, Idade: {self.idade}"


p = Pessoa("João", 21)
print(p)
