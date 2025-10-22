lista = [1, 2, 3, 4]


def versao1(lista, k=1):
    ultimos = lista[-k:]
    partes_restantes = lista[:-k]
    print(ultimos + partes_restantes)


def versao2(lista, k=1):
    ultimos = []
    for i in range(len(lista)-k, len(lista)):
        ultimos.append(lista[i])

    restantes = []
    for j in range(len(lista)-k):
        restantes.append(lista[j])

    print(ultimos + restantes)


def versao3(lista, k=1):
    n = len(lista)
    novo = [0] * n
    k = k % n

    for i in range(0, n):
        nova_pos = (i + k) % n
        novo[nova_pos] = lista[i]

    print(novo)


versao1(lista.copy(), k=2)
versao2(lista.copy(), k=2)
versao3(lista.copy(), k=2)
