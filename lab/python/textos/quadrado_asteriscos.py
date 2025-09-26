def quadrado_asteriscos(n):
    for i in range(n):
        print('*' * n)


def quadrado_asterisco_longo(n):
    for _ in range(n):
        linha = ''
        for _ in range(n):
            linha += '*'
        print(linha)


def quadrado_asterisco_versao_C(n):
    for i in range(n):
        for j in range(n):
            print('*', end='')
        print()


quadrado_asteriscos(3)
print()
quadrado_asterisco_longo(3)
print()
quadrado_asterisco_versao_C(3)
