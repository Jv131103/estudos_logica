def k_alternante(*numeros, k=1):
    n = len(numeros)

    # 1) checar divisibilidade (ou se é 1 bloco só)
    if n % k != 0 and k != n:
        return False

    # 2) dividir em blocos de tamanho k
    blocos = [numeros[i:i+k] for i in range(0, n, k)]

    # 3) checar uniformidade dentro de cada bloco
    def paridade(x):
        return x % 2
    paridades_blocos = []

    for bloco in blocos:
        # pega paridade do primeiro
        p = paridade(bloco[0])
        # se algum elemento do bloco não tem mesma paridade -> falha
        if any(paridade(x) != p for x in bloco):
            return False
        paridades_blocos.append(p)

    # 4) checar alternância entre blocos
    for i in range(1, len(paridades_blocos)):
        if paridades_blocos[i] == paridades_blocos[i-1]:
            return False

    return True


print(k_alternante(1, 3, 6, 8, 9, 11, 2, 4, 1, 7, 6, 8, k=2))     # True
print(k_alternante(1, 3, 5, k=3))                         # True
print(k_alternante(1, 3, 5, 7, 9, 11, k=2))               # False
print(k_alternante(2, 4, 6, 8, k=2))                      # False
