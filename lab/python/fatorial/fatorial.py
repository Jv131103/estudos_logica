def fatorial_for_linear(n):
    mult = 1
    for i in range(n, 0, -1):
        mult *= i
    return mult


def fatorial_while_linear(n):
    mult = 1
    cont = n

    while cont > 0:
        mult *= cont
        cont -= 1

    return mult


def fatorial_recursivo(n):
    if n == 0:
        return 1
    return n * fatorial_recursivo(n - 1)


print(fatorial_for_linear(5))
print(fatorial_while_linear(5))
print(fatorial_recursivo(5))
