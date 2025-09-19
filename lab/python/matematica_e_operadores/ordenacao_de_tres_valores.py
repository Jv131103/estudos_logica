def comparacao_direta(a, b, c):
    # encontra menor sem listas e lidando com empates
    menor = a
    if b < menor:
        menor = b
    if c < menor:
        menor = c

    # encontra maior sem listas e lidando com empates
    maior = a
    if b > maior:
        maior = b
    if c > maior:
        maior = c

    # o do meio é a soma menos (menor + maior)
    meio = (a + b + c) - (menor + maior)

    print(menor, meio, maior)


def ordena_tres_swap(a, b, c):
    # versão swap; funciona com empates
    if a > b:
        a, b = b, a
    if a > c:
        a, c = c, a
    if b > c:
        b, c = c, b
    print(a, b, c)


def ordena_min_max(a, b, c):
    maior = max(a, b, c)
    menor = min(a, b, c)
    meio = (a + b + c) - (menor + maior)
    print(menor, meio, maior)


def ordena_por_lista(a, b, c):
    a, b, c = sorted([a, b, c])
    print(a, b, c)


def ordena_por_lista2(lista):
    # ordena numericamente; só converte para string na hora de imprimir
    ordenada = sorted(lista)
    print(" ".join(map(str, ordenada)))


# Testes rápidos
comparacao_direta(1, 2, 3)
comparacao_direta(1, 3, 2)
comparacao_direta(3, 2, 1)
comparacao_direta(3, 1, 2)
comparacao_direta(2, 3, 1)
comparacao_direta(2, 1, 3)
comparacao_direta(2, 2, 1)  # casos com empate
comparacao_direta(1, 1, 2)
print()

ordena_tres_swap(1, 2, 3)
ordena_tres_swap(1, 3, 2)
ordena_tres_swap(3, 2, 1)
ordena_tres_swap(3, 1, 2)
ordena_tres_swap(2, 3, 1)
ordena_tres_swap(2, 1, 3)
ordena_tres_swap(2, 2, 1)  # casos com empate
ordena_tres_swap(1, 1, 2)
print()

ordena_min_max(1, 2, 3)
ordena_min_max(1, 3, 2)
ordena_min_max(3, 2, 1)
ordena_min_max(3, 1, 2)
ordena_min_max(2, 3, 1)
ordena_min_max(2, 1, 3)
ordena_min_max(2, 2, 1)  # casos com empate
ordena_min_max(1, 1, 2)
print()

ordena_por_lista(1, 2, 3)
ordena_por_lista(1, 3, 2)
ordena_por_lista(3, 2, 1)
ordena_por_lista(3, 1, 2)
ordena_por_lista(2, 3, 1)
ordena_por_lista(2, 1, 3)
ordena_por_lista(2, 2, 1)  # casos com empate
ordena_por_lista(1, 1, 2)
print()

ordena_por_lista2([1, 2, 3])
ordena_por_lista2([1, 3, 2])
ordena_por_lista2([3, 2, 1])
ordena_por_lista2([3, 1, 2])
ordena_por_lista2([2, 3, 1])
ordena_por_lista2([2, 1, 3])
ordena_por_lista2([2, 2, 1])  # casos com empate
ordena_por_lista2([1, 1, 2])
print()
