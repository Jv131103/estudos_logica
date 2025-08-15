def soma_de_dois_numeros(m=10, n=10):
    maior = maiorx = maiory = 0
    for x in range(m):
        for y in range(n):
            calculo = x * y - x**2 + y
            if calculo > maior:
                maior = calculo
                maiorx = x
                maiory = y
    print(maiorx, maiory, maior)


soma_de_dois_numeros()
