def diagonal_principal(matriz):
    soma = 0

    for i in range(len(matriz)):
        for j in range(len(matriz)):
            if i == j:
                soma += matriz[i][j]

    return soma


print(diagonal_principal([[1, 2], [3, 4]]))
print(diagonal_principal([[1, 2, 3], [4, 5, 6], [7, 8, 9]]))
