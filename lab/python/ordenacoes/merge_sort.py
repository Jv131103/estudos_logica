def merge(esquerda, direita):
    resultado = []
    i = j = 0

    while i < len(esquerda) and j < len(direita):
        if esquerda[i] < direita[j]:
            resultado.append(esquerda[i])
            i += 1
        else:
            resultado.append(direita[j])
            j += 1

    resultado.extend(esquerda[i:])
    resultado.extend(direita[j:])
    return resultado


def merge_sort_iterativo(lista):
    n = len(lista)
    tamanho = 1  # começa juntando blocos de 1 elemento

    while tamanho < n:
        for i in range(0, n, 2 * tamanho):
            meio = i + tamanho
            fim = i + 2 * tamanho
            esquerda = lista[i:meio]
            direita = lista[meio:fim]
            lista[i:fim] = merge(esquerda, direita)
        tamanho *= 2  # dobra o tamanho do bloco a cada rodada

    return lista


valores = [8, 3, 5, 2, 9, 1]
print("Antes:", valores)
print("Depois:", merge_sort_iterativo(valores))
