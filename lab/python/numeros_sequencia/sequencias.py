def pares_ordenados(lista):
    i = 0
    ordenados = []
    for i in range(len(lista)):
        for j in range(i + 1, len(lista)):
            ordenados.append((lista[i], lista[j]))
    return ordenados


if __name__ == "__main__":
    lista = [1, 2, 3, 4]
    print(pares_ordenados(lista))
