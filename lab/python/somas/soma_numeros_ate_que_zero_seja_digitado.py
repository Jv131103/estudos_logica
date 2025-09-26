def soma_numeros():
    soma = 0
    while True:
        numero = float(input())
        if numero == 0:
            break
        soma += numero
    return soma


def soma_numeros_comprimido():
    soma = 0
    numero = float(input())
    while numero != 0:
        soma += numero
        numero = float(input())
    return soma


print(soma_numeros())
print(soma_numeros_comprimido())
