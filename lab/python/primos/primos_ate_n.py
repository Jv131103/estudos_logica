def eh_primo(n):
    if n < 2:
        return False

    for x in range(2, int(n**0.5) + 1):
        if n % x == 0:
            return False
    return True


def primos_ate(n):
    for divisor in range(2, n+1):
        if eh_primo(divisor):
            print(divisor, end=" ")
    print()


primos_ate(10)
