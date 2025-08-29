# lê dimensões
linhas, colunas = map(int, input().split())

# lê a matriz
matriz = []
for _ in range(linhas):
    valores = list(map(int, input().split()))
    matriz.append(valores)

# imprime transposta
for j in range(colunas):          # percorre colunas da original
    for i in range(linhas):       # percorre linhas da original
        print(matriz[i][j], end=" ")
    print()
