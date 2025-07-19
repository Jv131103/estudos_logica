def contar_ocorrencias(lista, valor):
    if not lista:  # caso base: lista vazia
        return 0
    if lista[0] == valor:
        return 1 + contar_ocorrencias(lista[1:], valor)
    else:
        return contar_ocorrencias(lista[1:], valor)


lista = [1, 2, 3, 3, 4, 5]
print(contar_ocorrencias(lista, 3))  # Saída: 2

