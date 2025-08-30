def soma(x, y):
    return x + y


def subtracao(x, y):
    return x - y


def multiplicacao(x, y):
    return x * y


def divisao(x, y, type="/"):
    if y == 0:
        return "Not division 0"
    match type:
        case "/":
            return x / y
        case "//":
            return x // y
        case "%":
            return x % y


def calculadora(x, operador, y):
    match operador:
        case "+":
            print(f"{x} + {y} = {soma(x, y)}")
        case "-":
            print(f"{x} - {y} = {subtracao(x, y)}")
        case "*":
            print(f"{x} x {y} = {multiplicacao(x, y)}")
        case "/":
            print(f"{x} ÷ {y} = {divisao(x, y)}")
        case "//":
            print(f"{x} ÷ integer quociente {y} = {divisao(x, y, operador)}")
        case "%":
            print(f"{x} module division {y} = {divisao(x, y, operador)}")
        case _:
            raise ValueError(
                "Tipo inválido:\nOperador precisa possuir:(+, -, *, /, //, %)"
            )


print("==" * 30)
while True:
    n1 = int(input("N1: "))
    op = input("Operador [+, -, *, /, //, %] ")
    n2 = int(input("N2: "))
    print("--" * 30)
    calculadora(n1, op, n2)
    print("==" * 30)
