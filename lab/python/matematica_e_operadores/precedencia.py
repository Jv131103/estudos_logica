def calcular_expressao1(x, y, z):
    return x + y * z


def calcular_expressao2(x, y, z):
    return (x + y) * z


def verificar_se_expressao_e_verdadeira(x, y, z):
    return 1 if (x > y) and (y < z) else 0


n1 = int(input("N1: "))
n2 = int(input("N2: "))
n3 = int(input("N3: "))

print(calcular_expressao1(n1, n2, n3))
print(calcular_expressao2(n1, n2, n3))
print(verificar_se_expressao_e_verdadeira(n1, n2, n3))
