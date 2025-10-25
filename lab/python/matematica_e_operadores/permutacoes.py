def fatorial(n):
    m = 1
    for i in range(n, 0, -1):
        m *= i
    return m


def permutacao(n):
    return fatorial(n)


def permutacao_parcial(n, k):
    return fatorial(n) // fatorial(n - k)


print(permutacao(4))
print(permutacao_parcial(5, 3))
