def retornar_binario(numero):
    lista_restos = []
    while numero != 0:
        numero, resto = numero // 2, numero % 2
        lista_restos.append(resto)

    resultado = ""
    for i in range(len(lista_restos)-1, -1, -1):
        resultado += str(lista_restos[i])
    return resultado


def retornar_binario2(numero):
    resultado = ""
    while numero != 0:
        temp = numero % 2
        resto = temp
        numero //= 2
        resultado += str(resto)
    return resultado[::-1]


def retornar_binario3(numero):
    lista_restos = []
    while numero != 0:
        numero, resto = numero // 2, numero % 2
        lista_restos.append(resto)

    return ''.join(str(bit) for bit in reversed(lista_restos))


print(retornar_binario(10))
print(retornar_binario2(10))
print(retornar_binario3(10))
