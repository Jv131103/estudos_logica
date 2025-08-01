def contar_segmentos(*numeros):
    if not numeros:
        return 0

    segmentos = 1  # o primeiro número já inicia o primeiro segmento
    anterior = numeros[0]

    for numero in numeros[1:]:
        if numero != anterior:
            segmentos += 1
            anterior = numero

    return segmentos


print(contar_segmentos(5, 2, 2, 3, 4, 4, 4, 4, 1, 1))  # saída esperada: 5
print(contar_segmentos(2, 2, 2, 3, 4, 4, 4, 4, 1, 1))  # saída esperada: 5
