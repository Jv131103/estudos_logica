# Método 1 - Força bruta
# Verifica todos os divisores de 1 até n
def is_prime(n):
    if n < 2:
        return False

    cont = 0
    for x in range(1, n + 1):
        if n % x == 0:
            cont += 1

    return cont == 2


# Método 2 - Otimizado pela raiz quadrada
# Testa divisores apenas até a raiz de n, pois não existem divisores maiores
# sem que o outro seja menor
def is_prime2(n):
    if n < 2:
        return False
    for x in range(2, int(n**0.5) + 1):
        if n % x == 0:
            return False
    return True


# Crivo de Eratóstenes
# Gera todos os primos até o limite usando marcação de múltiplos
def crivo_eratostenes(limite):
    primos = [True] * (limite + 1)  # Marca todos como primos inicialmente
    primos[0] = primos[1] = False  # 0 e 1 não são primos

    p = 2
    while p * p <= limite:
        if primos[p]:
            for i in range(p * p, limite + 1, p):
                primos[i] = False
        p += 1

    return [num for num, primo in enumerate(primos) if primo]


# Método 3 - Usando o Crivo
# Verifica se n está na lista dos primos gerados pelo crivo até ele mesmo
def is_prime3(n):
    return n in crivo_eratostenes(n)


# Método 4 - Usando while e lógica booleana
def is_prime4(n):
    eh_primo = True
    divisor = 2

    # Enquanto o divisor for menor que n e ainda não achamos um divisor que
    # invalida
    while divisor < n and eh_primo:
        if n % divisor == 0:
            eh_primo = False  # Achou um divisor que não seja 1 nem ele mesmo
        divisor += 1

    # Verifica se n não é 1, pois 1 não é primo
    if eh_primo and n != 1:  # 1 não é primo
        return True
    else:
        return False


print(is_prime(7))
print(is_prime(4))

print(is_prime2(7))
print(is_prime2(4))

print(is_prime3(7))
print(is_prime3(4))

print(is_prime4(7))
print(is_prime4(4))
