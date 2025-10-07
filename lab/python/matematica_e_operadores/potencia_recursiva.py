def potencia_recursiva(base, expoente):
    if expoente == 0:
        return 1
    if base == 0:
        return 0
    return base * potencia_recursiva(base, expoente - 1)


def potencia_rapida(base, expoente):
    if expoente == 0:
        return 1
    if expoente == 1:
        return base

    # caso par
    if expoente % 2 == 0:
        metade = potencia_rapida(base, expoente // 2)
        return metade * metade
    else:
        # caso ímpar
        return base * potencia_rapida(base, expoente - 1)


# Testes
print(potencia_rapida(2, 10))  # 1024
print(potencia_rapida(3, 7))   # 2187
print(potencia_rapida(5, 0))   # 1
print(potencia_rapida(7, 1))   # 7
print()
print(potencia_recursiva(2, 3))  # 8
print(potencia_recursiva(5, 0))  # 1
print(potencia_recursiva(0, 5))  # 0
print(potencia_recursiva(2, 4))  # 16
