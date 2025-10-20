def multiplicacao_de_matrizes(mat1, mat2):
    # Verifica compatibilidade: colunas de mat1 == linhas de mat2
    if len(mat1[0]) != len(mat2):
        raise ValueError(
            "Número de colunas da primeira deve ser igual ao "
            "número de linhas da segunda."
        )

    # Cria a matriz resultado
    # (mesmo número de linhas de mat1 e colunas de mat2)
    resultado = []

    # Percorre cada linha da primeira matriz
    for i in range(len(mat1)):
        linha_resultado = []

        # Percorre cada coluna da segunda matriz
        for j in range(len(mat2[0])):
            soma = 0  # acumula o produto linha x coluna

            # Multiplica elementos correspondentes e soma
            for k in range(len(mat1[0])):  # ou len(mat2)
                soma += mat1[i][k] * mat2[k][j]

            # Adiciona o resultado da célula (i, j)
            linha_resultado.append(soma)

        # Adiciona a linha completa à matriz final
        resultado.append(linha_resultado)

    return resultado


# Teste
m1 = [[1, 2], [3, 4]]
m2 = [[5, 6], [7, 8]]

print(multiplicacao_de_matrizes(m1, m2))
