def pond():
    soma_pesos = 0
    soma_produtos = 0

    while True:
        entrada = input("Nota (ou FIM): ").strip().upper()
        if entrada == "FIM":
            break

        nota = float(entrada)
        peso = float(input("Peso: "))

        soma_produtos += nota * peso
        soma_pesos += peso

    if soma_pesos == 0:
        raise ValueError("Peso total zero — média impossível")

    return soma_produtos / soma_pesos


print(pond())
