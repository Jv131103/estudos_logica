def congruentes(n, j, m):
    alvo = j % m  # resto desejado
    contador = 0
    numero = 0

    while contador < n:
        if numero % m == alvo:
            print(numero)
            contador += 1
        numero += 1


congruentes(5, 35, 39)
