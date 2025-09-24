def contagem1(inicio, fim, intervalo):
    while inicio <= fim:
        print(inicio, end=' ')
        inicio += intervalo
    print('FIM!')


def contagem2(inicio, fim, intervalo):
    for c in range(inicio, fim + 1, intervalo):
        print(c, end=' ')
    print('FIM!')


def contagem_for(N):
    '''
    Contagem de 1 a N usando for
    N: número final da contagem

    Exemplo de uso:
    >>> contagem_for(5)
    1 2 3 4 5
    '''
    for c in range(1, N + 1):
        print(c, end=' ')


def contagem_while(N):
    '''
    Contagem de 1 a N usando while
    N: número final da contagem

    Exemplo de uso:
    >>> contagem_while(5)
    1 2 3 4 5
    '''
    c = 1
    while c <= N:
        print(c, end=' ')
        c += 1


def contagem_simples(N, loop="for"):
    '''
    Contagem de 1 a N usando for ou while
    N: número final da contagem
    loop: "for" ou "while"
    Exemplo de uso:

    >>> contagem_simples(5, "for")
    1 2 3 4 5 FIM!
    >>> contagem_simples(5, "while")
    1 2 3 4 5 FIM!
    >>> contagem_simples(5, "dowhile")
    Erro: loop inválido
    OPÇÕES VÁLIDAS: for, while
    FIM!
    '''
    loop = loop.lower()
    if loop == "for":
        contagem_for(N)
    elif loop == "while":
        contagem_while(N)
    else:
        print("Erro: loop inválido")
        print("OPÇÕES VÁLIDAS: for, while")
    print('FIM!')


def contagem_simples2(N, loop="for"):
    funcoes = {
        "for": contagem_for,
        "while": contagem_while
    }

    if loop in funcoes:
        funcoes[loop](N)
    else:
        print("Erro: loop inválido")
        print("OPÇÕES VÁLIDAS: for, while")
    print('FIM!')


contagem_simples(5, "for")
contagem_simples(5, "while")
contagem_simples(5, "dowhile")
contagem_simples2(5, "for")
contagem_simples2(5, "while")
contagem_simples2(5, "dowhile")
contagem1(1, 5, 1)
contagem1(5, 50, 5)
contagem2(1, 5, 1)
contagem2(5, 50, 5)
