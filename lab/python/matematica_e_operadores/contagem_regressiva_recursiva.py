def contagem_recursiva(n):
    if n == 1:
        print(n)
        return n
    print(n, end=" ")
    return n - contagem_recursiva(n-1)


def contagem_recursiva2(n):
    if n == 0:  # caso base: parar quando chegar a zero
        return
    print(n, end=" ")
    contagem_recursiva(n - 1)


contagem_recursiva(5)
contagem_recursiva2(5)
