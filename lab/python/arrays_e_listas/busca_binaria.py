def busca_binaria(lista, valor):
    lista.sort()  # A lista deve estar ordenada para a busca binária

    esquerda = 0
    direita = len(lista) - 1

    while esquerda <= direita:
        meio = (esquerda + direita) // 2
        if lista[meio] == valor:
            return meio
        elif valor < lista[meio]:
            direita = meio - 1
        else:
            esquerda = meio + 1
    return -1


lista = [10, 2, 8, 4, 6]
valor = 6
print("Posição:", busca_binaria(lista, valor))
