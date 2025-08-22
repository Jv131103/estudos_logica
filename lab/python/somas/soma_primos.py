def is_prime(numero):

    if numero == 0 or numero == 1:
        return False

    cont = 0

    for divisor in range(1, numero+1):
        if numero % divisor == 0:
            cont += 1

    if cont == 2:
        return True
    return False


def is_prime_optimize(numero):
    if numero < 2:  # 0 e 1 não são primos
        return False
    if numero == 2:  # 2 é primo
        return True
    if numero % 2 == 0:  # elimina todos os pares > 2
        return False

    # testa apenas ímpares até a raiz quadrada
    limite = int(numero**0.5) + 1
    for divisor in range(3, limite, 2):
        if numero % divisor == 0:
            return False
    return True


def sum_primes(limite=10):
    soma = 0
    for x in range(limite):
        if is_prime(x):
            soma += x
    return soma


def sum_primes2(*numeros):
    soma = 0
    for x in numeros:
        if is_prime_optimize(x):
            soma += x
    return soma


def sum_primes3(numeros):
    return sum(prime for prime in numeros if is_prime_optimize(prime))


print(sum_primes())
print(sum_primes2(1, 2, 3, 5, 4, 6, 3))
print(sum_primes3(list(range(0, 20))))
