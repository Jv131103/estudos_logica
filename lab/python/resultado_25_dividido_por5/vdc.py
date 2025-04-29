def is0(n2):
    return n2 == 0


def retornar_divisao(n1, n2):
    if not is0(n2):
        return n1 / n2
    raise ZeroDivisionError("ERRO de divisão por 0!")


print(retornar_divisao(25, 5))  # Deve retornar 5
print(retornar_divisao(25, 0))
