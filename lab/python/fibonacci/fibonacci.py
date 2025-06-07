def fibonacci(n):
    n1 = 0
    n2 = 1
    if n == 0:
        return 0
    elif n == 1:
        return 1

    for _ in range(2, n+1):
        n1, n2 = n2, n1 + n2
    return n2


def fibonacci_recursivo(n):
    if n == 0:
        return n
    elif n == 1:
        return 1
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2)


if __name__ == "__main__":
    print(fibonacci(6))
    print(fibonacci_recursivo(6))
