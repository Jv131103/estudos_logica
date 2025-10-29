class Funcionario:
    def __init__(self, nome):
        self.nome = nome
        self.cargo = "Funcionário"

    def get_cargo(self):
        # método "genérico", que será sobrescrito
        print(f"Cargo do funcionário {self.nome}: {self.cargo}")


class Gerente(Funcionario):
    def __init__(self, nome):
        # chama o construtor da classe mãe
        super().__init__(nome)
        # modifica o atributo cargo
        self.cargo = "Gerente"

    # sobrescreve o método
    def get_cargo(self):
        print(f"Cargo do funcionário {self.nome}: {self.cargo}")


f1 = Funcionario("João")
f1.get_cargo()

g1 = Gerente("Maria")
g1.get_cargo()
