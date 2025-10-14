def encontrar_posicion(string: str, value: str):
    string = string.lower()
    value = value.lower()

    posicoes = []

    for i in range(len(string) - len(value) + 1):
        if string[i:i + len(value)] == value:
            posicoes.append(i)

    if not posicoes:
        return -1
    elif len(posicoes) == 1:
        return posicoes[0]
    else:
        return posicoes


# Testes
text = "teste"
print(encontrar_posicion(text, 'tes'))  # [0]
print(encontrar_posicion(text, 'est'))  # [1]
print(encontrar_posicion(text, 'ste'))  # [2]
print(encontrar_posicion(text, 'x'))    # -1
print(encontrar_posicion(text, 's'))    # [2]
print(encontrar_posicion(text, 't'))    # [0, 4]
