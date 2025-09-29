def maior_de_tres_normal(a, b, c):
    ''' Retorna o maior entre a, b e c usando comparações diretas. '''
    if a >= b and a >= c:
        return a
    elif b >= a and b >= c:
        return b
    else:
        return c


def maior_de_tres_com_swap(a, b, c):
    ''' Retorna o maior entre a, b e c usando troca de valores. '''
    if a < b:
        a, b = b, a  # troca a e b
    if a < c:
        a, c = c, a  # troca a e c
    return a


def maior_interativo(*numeros):
    ''' Retorna o maior entre os números fornecidos. '''
    if not numeros:
        return None
    maior = numeros[0]
    for num in numeros[1:]:
        if num > maior:
            maior = num
    return maior


def testes():
    numeros = [
        (3, 5, 2),
        (10, 7, 8),
        (1, 1, 1),
        (-1, -5, -3),
        (0, 0, 0),
        (2.5, 2.5, 3.5),
    ]
    for a, b, c in numeros:
        maior_normal = maior_de_tres_normal(a, b, c)
        maior_swap = maior_de_tres_com_swap(a, b, c)
        assert maior_normal == maior_swap
        print(f"Maior entre {a}, {b}, {c} é {maior_normal}")

    # Teste da função maior_interativo
    lista_numeros = [
        [3, 5, 2, 8, 1],
        [10, 7, 8, 12, 6],
        [1, 1, 1, 1],
        [-1, -5, -3, -2],
        [0, 0, 0, 0],
        [2.5, 2.5, 3.5, 4.0],
        [],
    ]
    for nums in lista_numeros:
        maior = maior_interativo(*nums)
        print(f"Maior entre {nums} é {maior}")  # None se a lista estiver vazia


testes()
