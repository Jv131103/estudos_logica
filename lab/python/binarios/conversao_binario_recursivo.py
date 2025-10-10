def decimal_to_binarie(numero):
    if numero == 0:
        return ""
    resto = numero % 2
    return str(decimal_to_binarie(numero // 2)) + str(resto)


def decimal_to_binarie2(numero, prefix=True):
    # trata n = 0 só na chamada de topo
    if numero == 0:
        return "0b0" if prefix else "0"

    def rec(x):
        if x == 0:
            return ""               # nada de "0" aqui!
        return rec(x // 2) + str(x % 2)

    bits = rec(abs(numero))
    return ("0b" + bits) if prefix else bits


numero = 13
resultado = decimal_to_binarie(numero)
print(f"{numero} -> {resultado or '0'}")

numero = 10
resultado = decimal_to_binarie2(numero)
print(f"{numero} -> {resultado or '0'}")
