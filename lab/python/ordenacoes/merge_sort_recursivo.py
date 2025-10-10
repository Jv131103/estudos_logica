def merge_sort(lista):
    if len(lista) <= 1:
        return lista

    # Divide
    meio = len(lista) // 2
    esquerda = merge_sort(lista[:meio])
    direita = merge_sort(lista[meio:])

    # Junta (merge)
    return merge(esquerda, direita)


def merge(esquerda, direita):
    resultado = []
    i = j = 0

    # Enquanto houver elementos em ambas as listas
    while i < len(esquerda) and j < len(direita):
        if esquerda[i] < direita[j]:
            resultado.append(esquerda[i])
            i += 1
        else:
            resultado.append(direita[j])
            j += 1

    # Se ainda restar elementos em alguma metade
    resultado.extend(esquerda[i:])
    resultado.extend(direita[j:])

    return resultado


print(merge_sort([8, 3, 5, 2]))        # [2, 3, 5, 8]
print(merge_sort([9, 1, 7, 3, 6, 2]))  # [1, 2, 3, 6, 7, 9]
