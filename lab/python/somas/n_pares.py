def n_pares_bit(n):
    for i in range(1, n+1):
        if i & 1 == 0:
            print(f"{i} é PAR")
        else:
            print(f"{i} é ÍMPAR")


def n_pares_other_calc(n):
    for x in range(1, n+1):
        if x // 2 * 2 == x:
            print(f"{x} é PAR")
        else:
            print(f"{x} é ÍMPAR")


n_pares_bit(5)
print()
n_pares_other_calc(5)
