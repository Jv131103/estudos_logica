def inverter_numeros1(numero):
    negativo = numero < 0
    inverso = str(numero)[::-1].replace("-", "")
    return -int(inverso) if negativo else int(inverso)


def inverter_numeros2(numero):
    negativo = numero < 0  # Verifica se é negativo
    numero = abs(numero)   # Trata negativos

    inverso = 0

    while numero > 0:
        resto = numero % 10
        inverso = (inverso * 10) + resto
        numero //= 10

    return -inverso if negativo else inverso


print(inverter_numeros1(1234))
print(inverter_numeros2(1234))
print()
print(inverter_numeros1(-1234))
print(inverter_numeros2(-1234))
print()
print(inverter_numeros1(0))
print(inverter_numeros2(0))
print()
print(inverter_numeros1(1000))
print(inverter_numeros2(1000))
