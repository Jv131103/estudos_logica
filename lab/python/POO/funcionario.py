class Funcionario:
    def __init__(self, nome):
        self.nome = nome
        self.cargo = "Funcionário"
        self.salario = 0.0

    def get_cargo(self):
        print(f"Cargo do funcionário {self.nome}: {self.cargo}")

    def calcular_bonus(self):
        # método genérico — sobrescrever nas subclasses
        pass


class Gerente(Funcionario):
    def __init__(self, nome, salario):
        super().__init__(nome)
        self.cargo = "Gerente"
        self.salario = salario

    def calcular_bonus(self):
        # sobrescrever depois
        return self.salario + (self.salario * 0.1)


class Diretor(Funcionario):
    def __init__(self, nome, salario):
        super().__init__(nome)
        self.cargo = "Diretor"
        self.salario = salario

    def calcular_bonus(self):
        # sobrescrever depois
        return self.salario + (self.salario * 0.2)


class Estagiario(Funcionario):
    def __init__(self, nome, salario):
        super().__init__(nome)
        self.cargo = "Estagiário"
        self.salario = salario

    def calcular_bonus(self):
        # sobrescrever depois
        return self.salario + (self.salario * 0.05)


# Exemplo de uso:
f1 = Funcionario("João")
g1 = Gerente("Maria", 5000)
d1 = Diretor("Carlos", 10000)
e1 = Estagiario("Pedro", 2500)

f1.get_cargo()
g1.get_cargo()
d1.get_cargo()
e1.get_cargo()


print(f"{g1.nome} receberá bônus de: R$ {g1.calcular_bonus():.2f}")
print(f"{d1.nome} receberá bônus de: R$ {d1.calcular_bonus():.2f}")
print(f"{e1.nome} receberá bônus de: R$ {e1.calcular_bonus():.2f}")
