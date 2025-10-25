def maximo_subarray(lista):
    # supõe lista não vazia
    soma_atual = lista[0]
    soma_maxima = lista[0]

    for i in range(1, len(lista)):
        x = lista[i]

        # soma_atual = max(x, soma_atual + x)
        if soma_atual + x < x:
            soma_atual = x      # recomeça em x
        else:
            soma_atual = soma_atual + x  # continua somando

        # soma_maxima = max(soma_maxima, soma_atual)
        if soma_atual > soma_maxima:
            soma_maxima = soma_atual

    return soma_maxima


def maximo_subarray_indices(lista):
    soma_atual = lista[0]
    soma_maxima = lista[0]
    ini_atual = 0
    ini_max = 0
    fim_max = 0

    for i in range(1, len(lista)):
        x = lista[i]

        if soma_atual + x < x:
            soma_atual = x
            ini_atual = i
        else:
            soma_atual = soma_atual + x

        if soma_atual > soma_maxima:
            soma_maxima = soma_atual
            ini_max = ini_atual
            fim_max = i

    return soma_maxima, (ini_max, fim_max)  # soma e intervalo [ini..fim]


print(maximo_subarray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))  # 6
print(maximo_subarray_indices([-2, 1, -3, 4, -1, 2, 1, -5, 4]))  # (6, (3, 6))
