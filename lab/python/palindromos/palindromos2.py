def palindromo1(texto):
    # normaliza: tudo minúsculo, sem espaços
    normalizado = texto.lower().replace(" ", "")
    return "SIM" if normalizado == normalizado[::-1] else "NAO"


def palindromo2(texto):
    texto = texto.lower().replace(" ", "")
    indice_final = len(texto) - 1

    inverso = ""

    for i in range(indice_final, -1, -1):
        inverso += texto[i]

    return "SIM" if inverso == texto else "NAO"


def palindromo_numerico(numero):
    original = numero
    inverso = 0
    while numero > 0:
        resto = numero % 10
        inverso = inverso * 10 + resto
        numero //= 10

    return "SIM" if inverso == original else "NAO"


print(palindromo1("asa"))
print(palindromo2("radar"))
print(palindromo_numerico(121))
