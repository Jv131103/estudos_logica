def filtrar_pares(numero):
    lista = list(map(int, input().split()))

    if len(lista) != numero:
        raise IndexError(
            "Tamanho da lista precisa compadecer ao limite esperado"
        )

    for numeros in lista:
        if numeros % 2 == 0:
            print(numeros, end=" ")
    print()


numero = int(input())
filtrar_pares(numero)
