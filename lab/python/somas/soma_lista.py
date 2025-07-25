def retornar_soma_linear(lista):
    soma = 0
    for valor in lista:
        soma += valor
    return soma


def retornar_soma_pa(lista):
    return (len(lista) / 2) * (lista[0] + lista[-1])


def soma_recursiva(lista, i=0):
    if i == len(lista):
        return 0
    return lista[i] + soma_recursiva(lista, i + 1)


numeros = [10, 20, 30, 40]
print("Algoritmo Linear:", retornar_soma_linear(numeros))
print("Algoritmo de Gauss:", retornar_soma_pa(numeros))
print("Algoritmo recursivo linear:", soma_recursiva(numeros))
