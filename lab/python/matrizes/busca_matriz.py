def busca_item_matriz(matriz, valor):
    # Se a matriz for vazia, ele retorna false
    if not matriz:
        return False

    for linha in range(len(matriz)):
        for coluna in range(len(matriz)):
            if matriz[linha][coluna] == valor:
                return True

    return False


testes = [
    ([[1, 2], [3, 4]], 3),
    ([[1, 2], [3, 4]], 7)
]

for teste in testes:
    matriz, busca = teste
    if busca_item_matriz(matriz, busca):
        print("Encontrado")
    else:
        print("Não encontrado")
