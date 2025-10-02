def is_perfect(n):
    if n <= 1:
        return False
    soma = 0
    for i in range(1, n):
        if n % i == 0:
            soma += i
    return soma == n


def is_perfect_eficient(n):
    if n <= 1:
        return False

    soma = 1  # 1 sempre é divisor (exceto n=1)
    raiz = int(n**(1/2))  # Raiz quadrada

    for i in range(2, raiz + 1):
        if n % i == 0:
            soma += i
            if i != n // i:  # evita somar duas vezes se for quadrado perfeito
                soma += n // i

    return soma == n


numbers = [5, 6, 7, 8, 20, 24, 28, 400, 480, 496, 8000, 8128, 33550336]

for number in numbers:
    if is_perfect_eficient(number):
        print(f"{number}: Perfeito")
    else:
        print(f"{number}: Não perfeito")
