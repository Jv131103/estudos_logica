def impares_entre_x_e_y(x, y):
    lista = []

    if x > y:
        return "X deve ser menor ou igual a Y"
    if x < 0 or y < 0:
        return "X e Y devem ser maiores ou iguais a 0"

    for i in range(x, y + 1):
        if i % 2 != 0:
            lista.append(i)

    if not lista:
        return "Nenhum número ímpar encontrado"

    return " ".join(map(str, lista))


def impares_entre_x_e_y_comprimido(x, y):
    if x > y:
        return "X deve ser menor ou igual a Y"
    if x < 0 or y < 0:
        return "X e Y devem ser maiores ou iguais a 0"

    impares = [i for i in range(x, y + 1) if i % 2 != 0]
    return impares if impares else "Nenhum número ímpar encontrado"


print(impares_entre_x_e_y(3, 9))
print(impares_entre_x_e_y(4, 10))
print(impares_entre_x_e_y(1, 5))
print(impares_entre_x_e_y(4, 4))
print(impares_entre_x_e_y(3, 11))
print()
print(impares_entre_x_e_y_comprimido(3, 9))
print(impares_entre_x_e_y_comprimido(4, 10))
print(impares_entre_x_e_y_comprimido(1, 5))
print(impares_entre_x_e_y_comprimido(4, 4))
print(impares_entre_x_e_y_comprimido(3, 11))
