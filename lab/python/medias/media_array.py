def media1(*valores):
    if not valores:
        return None
    return sum(valores) / len(valores)


def media2(valores):
    if not valores or not isinstance(valores, list):
        return None
    return sum(valores) / len(valores)


def media3(valores):
    if not valores or not isinstance(valores, list):
        return None

    soma = 0
    for valor in valores:
        soma += valor

    return soma / len(valores)


def media4(valores):
    if not valores or not isinstance(valores, list):
        return None

    soma = 0
    for valor in valores:
        soma += valor

    total = 0
    for _ in valores:
        total += 1

    return soma / total


lista = [10, 20, 30]
print(media1(*lista))
print(media2(lista))
print(media3(lista))
print(media4(lista))
