def maior(lista, i=0):
    if not lista:
        return None
    if i == len(lista) - 1:
        return lista[i]
    else:
        maior_resto = maior(lista, i + 1)
        if lista[i] > maior_resto:
            return lista[i]
        else:
            return maior_resto


# Testes
print(maior([3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]))  # 9
print(maior([-10, -20, -3, -4]))  # -3
print(maior([42]))  # 42
print(maior([0, -1, 1]))  # 1
print(maior([7, 7, 7, 7]))  # 7
print(maior([]))  # Deve lidar com lista vazia (retornar None)
