def triangulo_asterisco(n):
    for i in range(1, n+1):
        print("*" * i)


def triangulo_asterisco2(n):
    for i in range(1, n + 1):
        linha = ''
        for j in range(i):
            linha += '*'
        print(linha)


def triangulo_asterisco3(n):
    for i in range(1, n + 1):
        for j in range(i):
            print('*', end='')
        print()


def triangulo_asterisco4(n):
    x = "*"

    for i in range(1, n + 1):
        print(x)
        x += "*"


triangulo_asterisco(5)
print()
triangulo_asterisco2(5)
print()
triangulo_asterisco3(5)
print()
triangulo_asterisco4(5)
