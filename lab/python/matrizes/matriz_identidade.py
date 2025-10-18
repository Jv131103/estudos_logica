def matriz_identidade(n):
    for linha in range(n):
        for coluna in range(n):
            if linha == coluna:
                print(1, end=" ")
            else:
                print(0, end=" ")
        print()


def matriz_identidade1(n):
    matriz = [[1 if i == j else 0 for j in range(n)] for i in range(n)]
    for linha in matriz:
        print(*linha)


def matriz_identidade2(n):
    matriz = []
    for i in range(n):
        linha = [0] * n
        linha[i] = 1
        matriz.append(linha)
    for linha in matriz:
        print(*linha)


def matriz_identidade3(n):
    for i, j in zip(range(n), range(n)):
        linha = [1 if x == i else 0 for x in range(n)]
        print(*linha)


def matriz_identidade4(n):
    for i in range(n):
        print(" ".join("1" if i == j else "0" for j in range(n)))


matriz_identidade(3)
print()
matriz_identidade1(3)
print()
matriz_identidade2(3)
print()
matriz_identidade3(3)
print()
matriz_identidade4(3)
