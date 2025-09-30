def soma_digitos(numero):
    numero = abs(numero)
    soma = 0
    while numero > 0:
        resto = numero % 10
        soma += resto
        numero //= 10

    return soma


testes = [432, 12345, 0, 908, -32, -1, 1000]
for teste in testes:
    print(soma_digitos(teste))
