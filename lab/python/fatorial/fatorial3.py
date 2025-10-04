def fatorial_recursivo(n):
    if n == 1 or n == 0:
        print(f"{n} =", end=" ")
        return 1
    print(f"{n} x", end=" ")
    return n * fatorial_recursivo(n-1)


print(fatorial_recursivo(5))
