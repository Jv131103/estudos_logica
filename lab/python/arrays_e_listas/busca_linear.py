def busca_linear1(lista, valor):
    for i, item in enumerate(lista):
        if valor == item:
            return i
    return -1


def busca_linear2(lista, valor):
    i = 0
    for item in lista:
        if valor == item:
            return i
        i += 1
    return -1


lista = [2, 4, 6, 8, 10]
valor = 6

print("Posição:", busca_linear1(lista, valor))
print("Posição:", busca_linear2(lista, valor))
