def soma_ate_n(n):
    if n <= 0:
        raise ValueError("n deve ser maior que zero")
    return sum(range(1, n + 1))


def soma_ate_n2(n):
    if n <= 0:
        raise ValueError("n deve ser maior que zero")
    soma = 0
    for i in range(1, n + 1):
        soma += i
    return soma


def soma_ate_form_direto(n):
    if n <= 0:
        raise ValueError("n deve ser maior que zero")
    return n * (n + 1) // 2


if __name__ == "__main__":
    print(soma_ate_n(10))

    print(soma_ate_n2(10))

    print(soma_ate_form_direto(10))
