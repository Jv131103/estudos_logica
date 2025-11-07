PILHA = []


def esta_vazia():
    return not PILHA


def empilha(valor):
    PILHA.append(valor)


def desempilha():
    if esta_vazia():
        return None
    return PILHA.pop()


def topo():
    return PILHA[-1]


def tamanho():
    return len(PILHA)


if __name__ == "__main__":
    empilha(10)
    empilha(20)
    empilha(30)
    print(desempilha())
    print(topo())
    print(PILHA)
    print(tamanho())
