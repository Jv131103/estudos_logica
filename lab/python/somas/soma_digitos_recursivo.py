def soma_digitos_recursivo(n):
    n = abs(n)  # Considera o valor absoluto para lidar com números negativos
    if n == 0:
        return 0
    else:
        return n % 10 + soma_digitos_recursivo(n // 10)


print(soma_digitos_recursivo(1234))  # Saída: 10
print(soma_digitos_recursivo(-567))   # Saída: 18
