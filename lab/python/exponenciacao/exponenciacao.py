def variante1(valor, expoente):
    contador = 1
    resultado = 1
    while contador <= expoente:
        resultado *= valor
        contador += 1
    return resultado


def variante2(valor, expoente):
    return valor**expoente


def variante3(base, expoente):
    resultado = 1
    while expoente > 0:
        if expoente % 2 == 1:
            resultado *= base
        base *= base
        expoente //= 2
    return resultado


if __name__ == "__main__":
    valor = int(input("Digite a base: "))
    expoente = int(input("Digite o expoente: "))

    if expoente < 0:
        print("Não lemos expoente negativo")
    else:
        modelo1 = variante1(valor, expoente)
        print(f"modelo1: {modelo1}")

        modelo2 = variante2(valor, expoente)
        print(f"modelo2: {modelo2}")

        modelo3 = variante3(valor, expoente)
        print(f"modelo3: {modelo3}")
