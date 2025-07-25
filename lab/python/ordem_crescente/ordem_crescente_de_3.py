def ordem_crescente1(a, b, c):
    lista = sorted([a, b, c])
    for i in lista:
        print(i, end=" ")
    print()


def ordem_crescente2(a, b, c):
    maior = max(a, b, c)
    menor = min(a, b, c)
    intermediario = (a + b + c) - menor - maior
    print(menor, intermediario, maior)


def ordem_crescente3(a, b, c):
    lista = [a, b, c]
    maior = lista[0]
    menor = lista[0]
    for i in lista:
        if i > maior:
            maior = i
        if i < menor:
            menor = i
    meio = (a + b + c) - menor - maior
    print(menor, meio, maior)


def ordem_crescente4(a, b, c):
    print(*sorted([a, b, c]))


def ordem_crescente5(a, b, c):
    if a <= b and a <= c:
        if b <= c:
            print(a, b, c)
        else:
            print(a, c, b)
    elif b <= a and b <= c:
        if a <= c:
            print(b, a, c)
        else:
            print(b, c, a)
    else:  # c é o menor
        if a <= b:
            print(c, a, b)
        else:
            print(c, b, a)


def ordem_crescente6(a, b, c):
    if a > b:
        a, b = b, a
    if b > c:
        b, c = c, b
    if a > b:
        a, b = b, a
    print(a, b, c)


ordem_crescente1(1, 2, 3)
ordem_crescente1(1, 3, 2)
ordem_crescente1(2, 1, 3)
ordem_crescente1(2, 3, 1)
ordem_crescente1(3, 2, 1)
ordem_crescente1(3, 1, 2)
print()
ordem_crescente2(1, 2, 3)
ordem_crescente2(1, 3, 2)
ordem_crescente2(2, 1, 3)
ordem_crescente2(2, 3, 1)
ordem_crescente2(3, 2, 1)
ordem_crescente2(3, 1, 2)
print()
ordem_crescente3(1, 2, 3)
ordem_crescente3(1, 3, 2)
ordem_crescente3(2, 1, 3)
ordem_crescente3(2, 3, 1)
ordem_crescente3(3, 2, 1)
ordem_crescente3(3, 1, 2)
print()
ordem_crescente4(1, 2, 3)
ordem_crescente4(1, 3, 2)
ordem_crescente4(2, 1, 3)
ordem_crescente4(2, 3, 1)
ordem_crescente4(3, 2, 1)
ordem_crescente4(3, 1, 2)
print()
ordem_crescente5(1, 2, 3)
ordem_crescente5(1, 3, 2)
ordem_crescente5(2, 1, 3)
ordem_crescente5(2, 3, 1)
ordem_crescente5(3, 2, 1)
ordem_crescente5(3, 1, 2)
print()
ordem_crescente6(1, 2, 3)
ordem_crescente6(1, 3, 2)
ordem_crescente6(2, 1, 3)
ordem_crescente6(2, 3, 1)
ordem_crescente6(3, 2, 1)
ordem_crescente6(3, 1, 2)
