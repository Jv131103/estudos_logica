def potencia1(base, expoente):
    # caso especial: 0^0 é indefinido
    if base == 0 and expoente == 0:
        return "Indefinido (0^0)"

    # expoente zero -> retorna 1
    if expoente == 0:
        return 1

    resultado = 1
    exp = abs(expoente)

    for _ in range(exp):
        resultado *= base

    # se expoente for negativo -> inverte o resultado
    if expoente < 0:
        return 1 / resultado

    return resultado


def potencia2(base, expoente):
    return base**expoente


print(potencia1(2, 5))     # 32
print(potencia1(-2, 3))    # -8
print(potencia1(-2, 2))    # 4
print(potencia1(2, -3))    # 0.125
print(potencia1(5, 0))     # 1
print(potencia1(0, 0))     # indefinido
print(potencia1(0, 3))     # 0
print()
print(potencia2(2, 5))     # 32
print(potencia2(-2, 3))    # -8
print(potencia2(-2, 2))    # 4
print(potencia2(2, -3))    # 0.125
print(potencia2(5, 0))     # 1
print(potencia2(0, 0))     # 1
print(potencia2(0, 3))     # 0
