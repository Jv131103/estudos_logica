def produto_escalar(v1, v2):
    if len(v1) != len(v2):
        raise ValueError("Vetores precisam ter o mesmo tamanho")
    soma = 0
    for i in range(len(v1)):
        soma += v1[i] * v2[i]
    return soma


def produto_escalar2(v1, v2):
    return sum(a*b for a, b in zip(v1, v2))


print(produto_escalar([1, 2, 3], [4, 5, 6]))  # 32
print(produto_escalar2([1, 2, 3], [4, 5, 6]))  # 32
