class Circulo:
    def __init__(self, raio) -> None:
        self.raio = raio
        self.pi = 3.141

    def area(self):
        return self.pi * self.raio**2

    def perimetro(self):
        return 2 * self.pi * self.raio


c = Circulo(3)
print(f"Área = {c.area():.2f}, Perímetro = {c.perimetro():.2f}")
