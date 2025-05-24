def primeiros_multiplos(n, i, j):
    print(f"Primeiros {n} múltiplos de {i} e {j}")
    cont = 0  # Contador de múltiplos impressos
    mult = 0  # Candidato a multiplo de i ou j
    while cont < n:
        if mult % i == 0 or mult % j == 0:
            print(mult)
            cont += 1
        mult += 1


def primeiros_multiplos2(n, i, j):
    print(f"Primeiros {n} múltiplos de {i} e {j}")
    # mult_i armazena um múltiplo de i
    # mult_j armazena um
    mult_i = mult_j = 0

    for k in range(n):
        # selecione o menor múltiplo, imprima e passe para o próximo
        if mult_i == mult_j:
            print(mult_i)
            mult_i = mult_i + i  # próximo múltiplo de i
            mult_j = mult_j + j  # próximo múltiplo de j
        elif mult_i < mult_j:
            print(mult_i)
            mult_i = mult_i + i  # próximo múltiplo de i
        else:
            print(mult_j)
            mult_j = mult_j + j  # próximo múltiplo de j


if __name__ == "__main__":
    n = int(input("Digite o limite: "))
    i = int(input("Digite o primeiro número: "))
    j = int(input("Digite o segundo número: "))
    primeiros_multiplos(n, i, j)
    primeiros_multiplos2(n, i, j)
