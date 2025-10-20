fila = []

while True:
    execucao = input("[enqueue | dequeue | exit] ").lower().strip()
    if execucao == "exit":
        print("FIM")
        break
    elif execucao == "enqueue":
        valor = input("Valor a entrar na fila: ")
        fila.append(valor)
    elif execucao == "dequeue":
        if fila:
            fila.pop(0)
        else:
            print("Lista vazia")
    else:
        print("tipo inválido, digite apenas as opções citadas")


print(f"Fila final: {fila}")
