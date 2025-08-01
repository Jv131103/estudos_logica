def contar_segmentos_ordem_crescente(*numeros):
    if not numeros:
        return 0

    maximo = 1
    atual = 1
    anterior = numeros[0]

    for numero in numeros[1:]:
        if numero > anterior:
            atual += 1
        else:
            if atual > maximo:
                maximo = atual
            atual = 1
        anterior = numero  # não esquece de atualizar o anterior!

    # Verifica se o último segmento foi o maior
    if atual > maximo:
        maximo = atual

    return maximo


print(contar_segmentos_ordem_crescente(5, 10, 3, 2, 4, 7, 9, 8, 5))
print(contar_segmentos_ordem_crescente(10, 8, 7, 5, 2))
print(contar_segmentos_ordem_crescente(1, 2, 3, 4, 5))
