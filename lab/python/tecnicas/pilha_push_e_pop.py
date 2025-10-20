pilha = []

while True:
    execucao = input("[push | pop | exit] ").lower().strip()
    if execucao == "exit":
        print("FIM")
        break
    elif execucao == "push":
        while True:
            try:
                n = int(input("Número a adicionar: "))
                break
            except ValueError:
                print("Valor inválido, digite apenas números inteiros")

        pilha.append(n)
    elif execucao == "pop":
        if pilha:
            pilha.pop()
        else:
            print("Lista vazia")
    else:
        print("tipo inválido, digite apenas as opções citadas")


print(f"Pilha final: {pilha}")
