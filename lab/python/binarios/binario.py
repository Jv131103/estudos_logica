def retornar_decimal(binario):
    binario = str(binario)

    tamanho = len(binario) - 1

    soma_decimal = 0
    indice = 0
    for potencia in range(tamanho, -1, -1):
        soma_decimal += int(binario[indice]) * 2**potencia
        indice += 1
    return soma_decimal


print(retornar_decimal("10010"))
