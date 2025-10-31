from abc import ABC, abstractmethod


class Formas(ABC):
    @abstractmethod
    def area(self):
        raise ValueError("Área é obrigado a ser chamado e definido")


class Quadrado(Formas):
    def __init__(self, lado1, lado2) -> None:
        self.lado1 = lado1
        self.lado2 = lado2

    def area(self):
        return self.lado1 * self.lado2


class Circulo(Formas):
    def __init__(self, raio):
        self.raio = raio
        self.pi = 3.14

    def area(self):
        return self.pi * self.raio**2


class Triangulo(Formas):
    def __init__(self, base, altura) -> None:
        self.base = base
        self.altura = altura

    def area(self):
        return self.base * self.altura / 2


quadrado = Quadrado(2, 2)
print(quadrado.area())
circulo = Circulo(2)
print(circulo.area())
triangulo = Triangulo(2, 2)
print(triangulo.area())
