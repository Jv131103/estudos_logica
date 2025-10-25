def fatorial_for_linear(n):
    mult = 1
    for i in range(n, 0, -1):
        mult *= i
    return mult


def combinacoes(n, k):
    return fatorial_for_linear(n) / (
        fatorial_for_linear(k) * fatorial_for_linear(n - k)
    )


print(combinacoes(5, 2))
