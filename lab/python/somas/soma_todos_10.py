def soma_10_linear():
    # Forma Linear
    soma = 0
    for x in range(0, 11):
        soma += x

    return soma


def soma_10_modelo_gaus():
    # Modelo de Gaus para progressoes a1...an
    soma = (11 / 2) * (0 + 10)
    return soma


if __name__ == "__main__":
    print(f"modelo linear: {soma_10_linear()}")
    print(f"modelo de Gaus: {soma_10_modelo_gaus()}")
