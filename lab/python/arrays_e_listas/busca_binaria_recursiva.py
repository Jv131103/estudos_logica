def busca_binaria_recursiva(lista, valor, inicio=0, fim=None):
    if fim is None:
        fim = len(lista) - 1

    if inicio > fim:
        return -1

    meio = (inicio + fim) // 2

    if lista[meio] == valor:
        return meio
    elif lista[meio] < valor:
        return busca_binaria_recursiva(lista, valor, meio + 1, fim)
    else:
        return busca_binaria_recursiva(lista, valor, inicio, meio - 1)


lista = [10, 2, 8, 4, 6]
lista.sort()  # A lista deve estar ordenada para a busca binária
valor = 6
print("Posição:", busca_binaria_recursiva(lista, valor))
