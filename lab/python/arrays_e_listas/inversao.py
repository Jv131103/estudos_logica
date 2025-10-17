def inverter1(lista):
    if not lista:
        return None
    return list(reversed(lista))


def inverter2(lista):
    if not lista:
        return None
    tamanho = len(lista)

    reverso = []

    for i in range(tamanho-1, -1, -1):
        reverso.append(lista[i])

    return reverso


def inverter3(lista):
    if not lista:
        return None

    tamanho = len(lista)

    for i in range(tamanho // 2):
        lista[i], lista[tamanho - 1 - i] = lista[tamanho - 1 - i], lista[i]

    return lista


def inverter4(lista):
    if not lista:
        return None
    return lista[::-1]


lista = [1, 2, 3, 4]
print(inverter1(lista.copy()))
print(inverter2(lista.copy()))
print(inverter3(lista.copy()))
print(inverter4(lista.copy()))
