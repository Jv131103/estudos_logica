def multiplica_vetor_por_inteiro(vetor, k):
    carry = 0
    # percorre TODOS os dígitos (menos significativo -> mais significativo)
    for i in range(len(vetor)):
        produto = vetor[i] * k + carry
        vetor[i] = produto % 10
        carry = produto // 10
    # drena o carry restante
    while carry > 0:
        vetor.append(carry % 10)
        carry //= 10


def big_fatorial(n):
    if n == 0 or n == 1:
        return [1]  # vetor [1] representa 1
    resultado = [1]
    for multiplicador in range(2, n + 1):  # vai até n
        multiplica_vetor_por_inteiro(resultado, multiplicador)
    return resultado  # ainda invertido (LSB -> MSB)


fat = big_fatorial(10)
print(''.join(map(str, reversed(fat))))  # 3628800
