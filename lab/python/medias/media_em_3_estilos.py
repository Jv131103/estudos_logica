def media(a, b, c):                       # Procedural / estrutural
    return (a + b + c) / 3


class Calculadora:                         # OO
    def __init__(self, a, b, c) -> None:
        self.a, self.b, self.c = a, b, c

    def media(self):
        return (self.a + self.b + self.c) / 3


def functional_media(*valores):            # Funcional (pura)
    return sum(valores) / len(valores)


if __name__ == "__main__":
    entrada = input("Digite a, b, c (separados por espaço): ")
    a, b, c = map(float, entrada.split())

    print(f"{media(a, b, c):.2f}")                     # procedural
    calc = Calculadora(a, b, c)
    print(f"{calc.media():.2f}")                       # OO
    print(f"{functional_media(a, b, c):.2f}")          # funcional
