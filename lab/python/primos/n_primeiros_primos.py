def eh_primo(n):
    if n < 2:
        return False

    for x in range(2, int(n**0.5) + 1):
        if n % x == 0:
            return False
    return True


def n_primeiros_primos(n):
    contador = 0

    candidato = 2
    while contador < n:
        if eh_primo(candidato):
            print(candidato, end=" ")
            contador += 1

        candidato += 1
    print()


n_primeiros_primos(10)
