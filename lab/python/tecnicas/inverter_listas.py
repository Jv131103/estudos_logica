def inverter_lista_manual(lista):
    tamanho = len(lista)

    nova_lista = []
    for i in range(tamanho-1, -1, -1):
        nova_lista.append(lista[i])

    return nova_lista


def inverter_lista_slice(lista):
    return lista[::-1]


def inverter_lista_reverse(lista):
    return list(reversed(lista))


def inverter_lista_index(lista):
    nova_lista = []
    for i in range(len(lista)):
        # pega o último elemento, depois o penúltimo, etc.
        idx = len(lista) - 1 - i
        valor = lista[idx]
        nova_lista.append(valor)
    return nova_lista


def inverter_lista_usando_index(lista):
    nova_lista = []
    for i in range(len(lista)):
        valor = lista[-(i+1)]  # pega do fim
        pos = lista.index(valor)  # busca posição (ineficiente)
        nova_lista.append(lista[pos])
    return nova_lista


print(inverter_lista_manual([1, 2, 3, 4, 5]))
print(inverter_lista_manual(['a', 'b', 'c', 'd']))
print()
print(inverter_lista_slice([1, 2, 3, 4, 5]))
print(inverter_lista_slice(['a', 'b', 'c', 'd']))
print()
print(inverter_lista_reverse([1, 2, 3, 4, 5]))
print(inverter_lista_reverse(['a', 'b', 'c', 'd']))
print()
print(inverter_lista_index([1, 2, 3, 4, 5]))
print(inverter_lista_index(['a', 'b', 'c', 'd']))
print()
print(inverter_lista_usando_index([1, 2, 3, 4, 5]))
print(inverter_lista_usando_index(['a', 'b', 'c', 'd']))
