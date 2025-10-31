from abc import ABC, abstractmethod


class Imprimivel(ABC):
    @abstractmethod
    def imprimir(self):
        raise ValueError("Imprimir precisa ser chamado!")


class Relatorio(Imprimivel):
    def __init__(self, nome, data, descricao) -> None:
        self.nome = nome
        self.data = data
        self.descricao = descricao

    def imprimir(self):
        print(f"Nome do relatório: {self.nome}")
        print(f"Data de Criação: {self.data}")
        print(f"Descrição: {self.descricao}")


class Etiqueta(Imprimivel):
    def __init__(self, nome, data, descricao) -> None:
        self.nome = nome
        self.data = data
        self.descricao = descricao

    def imprimir(self):
        print(f"Nome da etiqueta: {self.nome}")
        print(f"Data de Criação: {self.data}")
        print(f"Descrição: {self.descricao}")


r = Relatorio("Confidencial 151 - Fenômeno", "31/10/1995", "SEM REGISTRO")
r.imprimir()
print()
e = Etiqueta("Lembrete de estudo", "31/10/2025", "Estudar lógica")
e.imprimir()
