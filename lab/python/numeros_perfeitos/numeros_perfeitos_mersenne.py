def eh_primo(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True


def gerar_numeros_perfeitos(limite):
    perfeitos = []
    p = 2
    while True:
        mersenne = 2**p - 1
        if eh_primo(mersenne):
            n = 2**(p-1) * mersenne
            if n > limite:
                break
            perfeitos.append(n)
        p += 1
    return perfeitos


# Exemplo: listar todos os números perfeitos até 10000
print(gerar_numeros_perfeitos(10000))
