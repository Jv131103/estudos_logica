def desconto_produto1(valor):
    if valor > 100:
        decrescimo = valor - (valor * 0.1)
    else:
        decrescimo = valor - (valor * 0.05)
    return decrescimo


def desconto_produto2(valor):
    if valor > 100:
        return valor * 0.9   # 10% de desconto
    else:
        return valor * 0.95  # 5% de desconto


def desconto_produto3(valor):
    return valor * 0.9 if valor > 100 else valor * 0.95


valores = [120, 150, 130, 110, 109, 105, 100, 98, 95, 99, 87]
for valor in valores:
    print(f"R$ {desconto_produto1(valor):.2f}")
    print(f"R$ {desconto_produto2(valor):.2f}")
    print(f"R$ {desconto_produto3(valor):.2f}")
    print("++" * 30)
