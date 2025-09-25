def mover(origem, destino, nome_origem, nome_destino):
    # Se um dos pinos está vazio, só pode mover do outro
    if not origem:
        origem.append(destino.pop())
        print(f"Mova disco de {nome_destino} para {nome_origem}")
    elif not destino:
        destino.append(origem.pop())
        print(f"Mova disco de {nome_origem} para {nome_destino}")
    elif origem[-1] < destino[-1]:
        destino.append(origem.pop())
        print(f"Mova disco de {nome_origem} para {nome_destino}")
    else:
        origem.append(destino.pop())
        print(f"Mova disco de {nome_destino} para {nome_origem}")


def torre_hanoi_iterativa(n):
    # discos em ordem decrescente (maior embaixo)
    origem = list(range(n, 0, -1))
    destino = []
    auxiliar = []

    nomes = ("A", "C", "B")  # origem=A, destino=C, auxiliar=B

    total_movimentos = 2**n - 1

    # Se n for par, troca destino e auxiliar
    if n % 2 == 0:
        nomes = ("A", "B", "C")

    for i in range(1, total_movimentos + 1):
        if i % 3 == 1:
            mover(origem, destino, nomes[0], nomes[1])
        elif i % 3 == 2:
            mover(origem, auxiliar, nomes[0], nomes[2])
        else:
            mover(auxiliar, destino, nomes[2], nomes[1])


# Exemplo com 3 discos
torre_hanoi_iterativa(3)
