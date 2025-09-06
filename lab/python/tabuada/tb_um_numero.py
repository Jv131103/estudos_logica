def tabuada_de_um_numero(numero, limite=10):
    for valor in range(1, limite+1):
        print(f"{numero} x {valor} = {numero * valor}")


def tabuada_de_um_numero2(numero, limite=10):
    valor = 1

    while valor <= limite:
        print(f"{numero} x {valor} = {numero * valor}")
        valor += 1


numero = int(input())
tabuada_de_um_numero(numero)
print()
numero = int(input())
tabuada_de_um_numero2(numero)
