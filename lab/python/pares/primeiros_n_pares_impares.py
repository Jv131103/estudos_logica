def primeiros_impares(n):
    cont = 1

    impares = 1
    lista_impares = []

    while cont <= n:
        lista_impares.append(impares)
        impares += 2
        cont += 1

    return lista_impares


def primeiros_pares(n):
    cont = 1

    pares = 2
    lista_pares = []

    while cont <= n:
        lista_pares.append(pares)
        pares += 2
        cont += 1

    return lista_pares


def primeiros(n):
    if not isinstance(n, int):
        raise ValueError("n deve ser do tipo int")

    n = abs(n)

    print("Pares:", " ".join(map(str, primeiros_pares(n))))
    print("Ímpares:", " ".join(map(str, primeiros_impares(n))))


primeiros(4)
