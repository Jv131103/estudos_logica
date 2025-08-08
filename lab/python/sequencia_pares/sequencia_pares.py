def sequencia(sequencia, *numeros):
    cont = 1

    i = 0
    soma = 0
    while cont <= sequencia:
        if numeros[i] == 0:
            print(f"SOMA: {soma}")
            cont += 1
            soma = 0
        else:
            if numeros[i] % 2 == 0:
                soma += numeros[i]
        i += 1


def sequencia2(sequencia):
    cont = 0
    lista_final = []
    while cont < sequencia:
        lista_inicial = []
        try:
            numero = int(
                input(f"Digite um número: [0 encerra a sequencia {cont+1}] ")
            )
            while numero != 0:
                lista_inicial.append(numero)
                numero = int(
                    input(
                        f"Digite um número: [0 encerra a sequencia {cont+1}] "
                    )
                )
            lista_final.append(lista_inicial)
            cont += 1
        except ValueError:
            print("DIGITE APENAS NÚMEROS INTEIROS")

    for lista in lista_final:
        soma = 0
        for valores in lista:
            if valores % 2 == 0:
                soma += valores
        print(f"SOMA: {soma}")


def sequencia_pythonica(sequencia):
    cont = 0
    lista_final = []

    while cont < sequencia:
        lista_inicial = []
        try:
            numero = int(
                input(f"Digite um número: [0 encerra a sequência {cont+1}] ")
            )
            while numero != 0:
                lista_inicial.append(numero)
                numero = int(
                    input(
                        f"Digite um número: [0 encerra a sequência {cont+1}] "
                    )
                )
            lista_final.append(lista_inicial)
            cont += 1
        except ValueError:
            print("DIGITE APENAS NÚMEROS INTEIROS")

    for i, lista in enumerate(lista_final, 1):
        soma = sum(val for val in lista if val % 2 == 0)
        print(f"Sequência {i} - SOMA dos pares: {soma}")


def ler_sequencias():
    print(
        "Digite os números das sequências.",
        "Use 0 para encerrar cada sequência. Digite ENTER vazio para parar.")
    todas = []
    atual = []

    while True:
        entrada = input()

        if entrada == "":
            break

        numero = int(entrada)

        if numero == 0:
            if atual:
                todas.append(atual)
                atual = []
        else:
            atual.append(numero)

    return todas


def somar_pares(sequencias):
    for i, seq in enumerate(sequencias, 1):
        soma = sum(num for num in seq if num % 2 == 0)
        print(f"Sequência {i} - Soma dos pares: {soma}")


print("Qual modo deseja usar?")
print("1 - Parâmetros fixos (sequencia)")
print("2 - Interativo (sequencia2)")
print("3 - Interativo Pythonico")
print("4 - Entrada livre com ENTER vazio")

opcao = input("Escolha (1/2/3/4): ")

if opcao == "1":
    sequencia(
        4, 3, 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 0, 2, 4, 6, 8, 9, 11, 21, 0, 7, 0
    )
elif opcao == "2":
    sequencia2(4)
elif opcao == "3":
    sequencia_pythonica(4)
elif opcao == "4":
    seqs = ler_sequencias()
    somar_pares(seqs)
else:
    print("Opção inválida.")
