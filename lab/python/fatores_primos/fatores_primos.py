def fatores_primos(n):
    fatores = {}
    divisor = 2
    while n > 1:
        multiplicidade = 0
        while n % divisor == 0:
            n //= divisor
            multiplicidade += 1
        if multiplicidade > 0:
            fatores[divisor] = multiplicidade
        divisor += 1
    return fatores


# Exemplo de uso
print(fatores_primos(60))   # {2: 2, 3: 1, 5: 1}
print(fatores_primos(84))   # {2: 2, 3: 1, 7: 1}
