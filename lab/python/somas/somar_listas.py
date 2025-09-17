def somar_listas_completo(l1, l2):
    if not l1 or not l2:
        raise ValueError("As listas não podem ser vazias!")

    l3 = []

    ultimo = []
    if len(l1) == len(l2):
        maior_indice = len(l1)
    elif len(l1) > len(l2):
        maior_indice = len(l2)
        ultimo = l1[maior_indice:]
    else:
        maior_indice = len(l1)
        ultimo = l2[maior_indice:]

    for i in range(0, maior_indice):
        l3.append(l1[i] + l2[i])
    if ultimo:
        l3.extend(ultimo)
    return l3


def somar_listas_completo2(l1, l2):
    if not l1 or not l2:
        raise ValueError("As listas não podem ser vazias!")

    min_len = min(len(l1), len(l2))
    soma = [l1[i] + l2[i] for i in range(min_len)]
    # Apenas uma dessas fatias terá conteúdo
    soma.extend(l1[min_len:])
    soma.extend(l2[min_len:])
    return soma


def somar_listas(l1, l2):
    if len(l1) != len(l2):
        raise ValueError("As listas precisam ter o mesmo tamanho!")

    l3 = []
    for i in range(len(l1)):
        l3.append(l1[i] + l2[i])
    return l3


def somar_listas2(l1, l2):
    if len(l1) != len(l2):
        raise ValueError("As listas precisam ter o mesmo tamanho!")

    l3 = []
    for x, y in zip(l1, l2):
        l3.append(x+y)

    return l3


print(somar_listas([1, 2, 3, 4], [10, 20, 30, 40]))
print(somar_listas2([1, 2, 3, 4], [10, 20, 30, 40]))

print(somar_listas_completo([1, 2, 3, 4], [10, 20, 30, 40]))
print(somar_listas_completo([1, 2, 3, 4], [10, 20, 30]))
print(somar_listas_completo([1, 2, 3], [10, 20, 30, 40]))
print(somar_listas_completo([1, 2], [10, 20, 30, 40]))
print(somar_listas_completo([1, 2, 3, 4], [30, 40]))
