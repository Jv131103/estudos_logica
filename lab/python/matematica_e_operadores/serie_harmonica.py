def serie_harmonica(sinfonia):
    soma = 1

    for i in range(2, sinfonia+1):
        soma += 1/i

    return soma


print(serie_harmonica(5))
