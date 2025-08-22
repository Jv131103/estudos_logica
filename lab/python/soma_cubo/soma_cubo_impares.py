def soma_impares_cubo(m):
    for n in range(1, m+1):
        a = n*n - n + 1              # primeiro ímpar da sequência
        seq = [a + 2*k for k in range(n)]
        print(f"{n}^3 = {' + '.join(map(str, seq))}")


def cubo_com_impares(m):
    resultado = {}
    for n in range(1, m+1):
        a = n*n - n + 1                 # primeiro ímpar
        seq = [a + 2*k for k in range(n)]
        assert sum(seq) == n**3         # só pra conferência
        resultado[n] = seq
    return resultado


print(cubo_com_impares(4))
soma_impares_cubo(4)
