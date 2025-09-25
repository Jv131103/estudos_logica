def contagem_regressiva_for(n):
    for i in range(n, -1, -1):
        print(i, end=' ')


def contagem_regressiva_while(n):
    i = n
    while i >= 0:
        print(i, end=' ')
        i -= 1
    print()


contagem_regressiva_for(5)
print()
contagem_regressiva_while(5)
