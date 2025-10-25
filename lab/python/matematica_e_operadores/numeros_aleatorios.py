def gerar_aleatorios(N, A, B, semente=1):
    # Parâmetros do gerador (valores clássicos e bons para LCG)
    a = 1664525
    c = 1013904223
    m = 2**32  # número grande para espalhar bem os valores

    numeros = []
    x = semente  # valor inicial

    for _ in range(N):
        # Fórmula principal: X_{n+1} = (a*X_n + c) % m
        x = (a * x + c) % m

        # Ajusta o número para o intervalo desejado [A, B]
        valor = A + (x % (B - A + 1))
        numeros.append(valor)

    return numeros


# Exemplo de uso:
print(gerar_aleatorios(N=5, A=1, B=10, semente=7))
