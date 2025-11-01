# Evite usar lambdas assim, isto é apenas para estudos
soma = lambda x, y: x + y  # noqa: E731


valores_e_saidas = (
    [1, 1, 2],
    [4, 5, 9],
    [10, 5, 15],
    [-1, 1, 0],
    [-2, -2, -4],
    [3, 7, 10]
)

for valor_e_saida in valores_e_saidas:
    x, y, saida = valor_e_saida
    saida_soma = soma(x, y)
    print(saida_soma)
    erro_saida = f"SOMA INVÁLIDA: {x} + {y} = {x+y} sua saida foi: {saida}"
    assert saida == saida_soma, erro_saida
