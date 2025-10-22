def matriz_simetrica(matriz):
    for linha in range(len(matriz)):
        for coluna in range(len(matriz)):
            if matriz[linha][coluna] != matriz[coluna][linha]:
                return 'Não simétrica'
    return "Simétrica"


A = [
  [1, 2],
  [2, 1]
]
print(matriz_simetrica(A))

B = A = [
  [1, 3],
  [2, 1]
]
print(matriz_simetrica(B))

C = [
  [1, 5, 7],
  [5, 2, 3],
  [7, 3, 9]
]
print(matriz_simetrica(C))
