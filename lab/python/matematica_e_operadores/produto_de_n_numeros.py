def produto_de_n_numeros(n):
    produto = 1
    for i in range(n):
        numero = float(input())
        produto *= numero
    return produto


def produto_de_n_numeros_comprimido(n):
    produto = 1
    for _ in range(n):
        produto *= float(input())
    return produto


print(produto_de_n_numeros(3))
print(produto_de_n_numeros_comprimido(3))
