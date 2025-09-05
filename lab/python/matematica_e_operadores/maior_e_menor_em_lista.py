def maior_e_menor_em_uma_lista():
    limite = int(input())
    lista = list(map(int, input().split()))

    if len(lista) > limite or len(lista) < limite:
        raise IndexError(
            "Tamanho da lista precisa compadecer ao limite esperado"
        )

    maior = int(lista[0])
    menor = int(lista[0])
    for i in lista:
        numero = int(i)
        if numero > maior:
            maior = numero

        if numero < menor:
            menor = numero

    print("Menor:", menor)
    print("Maior:", maior)


def maior_e_menor_em_uma_lista2():
    limite = int(input())
    lista = list(map(int, input().split()))

    if len(lista) > limite or len(lista) < limite:
        raise IndexError(
            "Tamanho da lista precisa compadecer ao limite esperado"
        )

    print("Menor:", min(lista))
    print("Maior:", max(lista))


maior_e_menor_em_uma_lista2()
