def maior_valor_lido(qtd):
    maior = float(input("Digite um valor: "))
    for _ in range(qtd - 1):
        valor = float(input("Digite um valor: "))
        if valor > maior:
            maior = valor
    return maior


def maior_valor_lido_comprimido(qtd):
    maior = float(input("Digite um valor: "))
    for _ in range(qtd - 1):
        valor = float(input("Digite um valor: "))
        maior = valor if valor > maior else maior
    return maior


def maior_valor_lido_lista(qtd):
    valores = []
    for _ in range(qtd):
        valor = float(input("Digite um valor: "))
        valores.append(valor)

    maior = valores[0]
    for valor in valores:
        if valor > maior:
            maior = valor

    return maior


print("Maior =", maior_valor_lido(5))
print("Maior =", maior_valor_lido_comprimido(5))
print("Maior =", maior_valor_lido_lista(5))
