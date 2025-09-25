def soma_digitos_linear(n):
    n = abs(n)  # Considera o valor absoluto para lidar com números negativos
    soma = 0
    while n > 0:
        soma += n % 10
        n //= 10
    return soma


def versao_alternativa(n):
    n = abs(n)  # Considera o valor absoluto para lidar com números negativos
    return sum(int(digito) for digito in str(n))


print(soma_digitos_linear(1234))  # Saída: 10
print(soma_digitos_linear(-567))   # Saída: 18

print(versao_alternativa(1234))  # Saída: 10
print(versao_alternativa(-567))   # Saída: 18
