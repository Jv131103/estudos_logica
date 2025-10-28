class Retangulo:
    def __init__(self, largura, altura) -> None:
        self.largura = largura
        self.altura = altura

    def __repr__(self) -> str:
        classe = self.__class__.__name__
        return f"{classe}(largura={self.largura}, altura={self.altura})"

    def area(self):
        return self.largura * self.altura


ret = Retangulo(4, 5)
print(ret)
print(f"Área = {ret.area()}")
