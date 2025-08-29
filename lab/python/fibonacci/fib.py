def fib(n):
    if n == 0:
        return n
    elif n == 1:
        return 1
    return fib(n - 1) + fib(n - 2)


def fib2(n):
    n1 = 0
    n2 = 1
    if n == 0:
        return 0, [0]
    elif n == 1:
        return 1, [0, 1]

    sequencia = [n1, n2]

    for _ in range(2, n+1):
        n1, n2 = n2, n1 + n2
        sequencia.append(n2)
    return n2, sequencia


n = int(input())

# Versão recursiva
print(f"f({n})={fib(n)} | seq: {[fib(i) for i in range(n+1)]}")

# versão iterativa
retorno = fib2(n)
print(f"f({n})={retorno[0]} | seq: {[i for i in retorno[1]]}")
