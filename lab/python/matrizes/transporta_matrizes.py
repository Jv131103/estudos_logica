def transposta(matriz):
    linhas = len(matriz)
    colunas = len(matriz[0])
    resultado = []

    for j in range(colunas):   # percorre colunas da original
        nova_linha = []
        for i in range(linhas):  # percorre linhas da original
            nova_linha.append(matriz[i][j])
        resultado.append(nova_linha)

    return resultado


M = [
    [1, 2, 3],
    [4, 5, 6]
]

print(transposta(M))
