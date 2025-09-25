class Aluno:
    def __init__(self, nome):
        self.nome = nome
        self.notas = []

    def adicionar_nota(self, nota):
        self.notas.append(nota)

    def calcular_media(self):
        if not self.notas:
            return 0
        return sum(self.notas) / len(self.notas)

    def aprovado(self):
        return self.calcular_media() >= 6

    def __repr__(self):
        return (
            f"Aluno: {self.nome}, Notas: {self.notas}, "
            f"Média: {self.calcular_media():.2f}"
        )


if __name__ == "__main__":
    aluno1 = Aluno("Maria")
    aluno1.adicionar_nota(7)
    aluno1.adicionar_nota(8)
    aluno1.adicionar_nota(6)
    aluno1.calcular_media()
    print(aluno1)
    print(aluno1.aprovado())

    print()

    aluno2 = Aluno("João")
    aluno2.adicionar_nota(5)
    aluno2.adicionar_nota(4)
    aluno2.adicionar_nota(6)
    aluno2.calcular_media()
    print(aluno2)
    print(aluno2.aprovado())
