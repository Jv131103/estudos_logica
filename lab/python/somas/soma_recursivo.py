def soma_recursiva(n):
    n = abs(n)
    if n == 0:
        return n
    return n + soma_recursiva(n-1)


print(soma_recursiva(5))
