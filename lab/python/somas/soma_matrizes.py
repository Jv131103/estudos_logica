def soma_matrizes(matriz1, matriz2):
    if len(matriz1) != len(matriz2):
        raise IndexError("MATRIZES PRECISAM TER O MESMO TAMANHO")

    nova_matriz = []
    for i in range(len(matriz1)):
        lista = []
        for j in range(len(matriz2)):
            lista.append(matriz1[i][j] + matriz2[i][j])
        nova_matriz.append(lista)

    return nova_matriz


def soma_matrizes1(matriz1, matriz2):
    if len(matriz1) != len(matriz2):
        raise IndexError("MATRIZES PRECISAM TER O MESMO TAMANHO")
    for i in range(len(matriz1)):
        for j in range(len(matriz2)):
            matriz1[i][j] = matriz1[i][j] + matriz2[i][j]

    return matriz1


def soma_matrizes2(matriz1, matriz2):
    return [
        [
            matriz1[i][j] + matriz2[i][j]
            for j in range(len(matriz1[i]))
        ]
        for i in range(len(matriz1))
    ]


def soma_matrizes3(matriz1, matriz2):
    return [
        [
            x + y
            for x, y in zip(l1, l2)
        ]
        for l1, l2 in zip(matriz1, matriz2)
    ]


print(soma_matrizes(matriz1=[[1, 2], [3, 4]], matriz2=[[5, 6], [7, 8]]))
print(soma_matrizes1(matriz1=[[1, 2], [3, 4]], matriz2=[[5, 6], [7, 8]]))
print(soma_matrizes2(matriz1=[[1, 2], [3, 4]], matriz2=[[5, 6], [7, 8]]))
print(soma_matrizes3(matriz1=[[1, 2], [3, 4]], matriz2=[[5, 6], [7, 8]]))
