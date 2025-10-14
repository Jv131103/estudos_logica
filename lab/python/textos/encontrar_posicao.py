def encontrar_posicion(string: str, value: str):
    lista_posicoes = []

    if len(value) > 1:
        posicao = 0
        for indice in range(len(string)):
            if string[indice].lower() == value[posicao].lower():
                lista_posicoes.append(indice)
                if posicao != len(value) - 1:
                    posicao += 1
    else:
        for posicao in range(len(string)):
            if string[posicao].lower() == value.lower():
                lista_posicoes.append(posicao)

    if len(lista_posicoes) == 1:
        return lista_posicoes[0]
    elif len(lista_posicoes) > 1:
        return lista_posicoes
    else:
        return -1


# Testes
text = "teste"

data_posicion = encontrar_posicion(text, 'tes')
print(data_posicion)  # [0, 1, 2]

data_posicion = encontrar_posicion(text, 'est')
print(data_posicion)  # [1, 2, 3]

data_posicion = encontrar_posicion(text, 'ste')
print(data_posicion)  # [2, 3, 4]

data_posicion = encontrar_posicion(text, 'x')
print(data_posicion)  # -1

data_posicion = encontrar_posicion(text, 's')
print(data_posicion)  # 2

data_posicion = encontrar_posicion(text, 't')
print(data_posicion)  # [0, 3]
