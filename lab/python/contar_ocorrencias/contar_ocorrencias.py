def contar_ocorrencias_recursivo(lista, valor):
    if not lista:  # caso base: lista vazia
        return 0
    if lista[0] == valor:
        return 1 + contar_ocorrencias_recursivo(lista[1:], valor)
    else:
        return contar_ocorrencias_recursivo(lista[1:], valor)


def contar_ocorrencias_linear(lista, valor):
    contador = 0
    if not lista:
        return 0
    for i in lista:
        if i == valor:
            contador += 1
    return contador


lista = [1, 2, 3, 3, 4, 5]
print(contar_ocorrencias_recursivo(lista, 3))  # Saída: 2
print(contar_ocorrencias_linear(lista, 3))  # Saída: 2
