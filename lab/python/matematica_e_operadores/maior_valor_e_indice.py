def versao1():
    lista = []

    for _ in range(8):
        numero = int(input())
        lista.append(numero)

    maior = lista[0]
    maior_indice = 0

    for i, valor in enumerate(lista):
        if valor > maior:
            maior_indice = i
            maior = valor

    print(f"max={maior}; idx={maior_indice}")


def versao2():
    lista = [int(input()) for _ in range(8)]
    maior = max(lista)
    maior_indice = lista.index(maior)
    print(f"max={maior}; idx={maior_indice}")


versao2()
