while True:
    n1, n2 = input().replace(",", ".").split()
    if n1 == "!" or n2 == "!":
        break
    try:
        n1 = float(n1)
        n2 = float(n2)

        soma = n1 + n2
        subtracao = n1 - n2
        multiplicacao = n1 * n2
        divisao = n1 / n2 if n2 != 0 else "Division Error"

        # print("Soma:", soma)
        # print("Subtração:", subtracao)
        # print("Multiplicação:", multiplicacao)
        # print("Divisão:", divisao)
        print(
            f"Soma: {soma}\
                \nSubtração: {subtracao}\
                \nMultiplicação: {multiplicacao}\
                \nDivisão: {divisao}"
            )
    except ValueError:
        print("Inválido, digite apenas números")
