def versao1(numero, subnumero):
    return str(subnumero) in str(numero)


def versao2(numero, subnumero):
    qtd_digitos = 0

    numeros_a_contar = subnumero

    while numeros_a_contar > 0:
        numeros_a_contar //= 10
        qtd_digitos += 1

    while numero >= 10**(qtd_digitos - 1):
        if numero % (10**qtd_digitos) == subnumero:
            return True
        numero //= 10
    return False


print(versao1(57238, 23))
print(versao1(258347, 23))
print(versao2(57238, 23))
print(versao2(258347, 23))
