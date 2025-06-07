def eh_numero_perfeito():
    n = int(input("DIGITE O VALOR DE N: "))
    soma = 0

    for i in range(1, n):
        if n % i == 0:
            soma += i

    if soma == n:
        return True
    return False


print(eh_numero_perfeito())
