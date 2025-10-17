def frequencia1(lista):
    if not lista:
        return None

    ja_foi = []
    for i in lista:
        if i in ja_foi:
            continue
        cont = 0
        for j in range(len(lista)):
            if lista[j] == i:
                cont += 1
        print(f"{i} aparece {cont}x")
        ja_foi.append(i)


def frequencia2(lista):
    if not lista:
        return None

    contagem = {}
    for i in lista:
        contagem[i] = contagem.get(i, 0) + 1

    for k, v in contagem.items():
        print(f"{k} aparece {v}x")


lista = [2, 3, 2, 5, 3, 2]
frequencia1(lista)
print()
frequencia2(lista)
