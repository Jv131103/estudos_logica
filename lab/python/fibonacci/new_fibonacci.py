def n_primeiros_fibonacci(n):
    if n == 0:
        return []
    elif n == 1:
        return [0]

    n1 = 0
    n2 = 1

    lista = [n1, n2]

    for _ in range(2, n):
        n1, n2 = n2, n1 + n2
        lista.append(n2)

    return lista


testes = [1, 2, 5, 10]

for teste in testes:
    print(n_primeiros_fibonacci(teste))
