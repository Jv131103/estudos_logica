def soma(n1, n2):
    return n1 + n2


# Lista de testes: [n1, n2, resultado esperado]
testes = [
    [2, 2, 4],
    [-3, 2, -1],
    [198, 12, 210],
    [3, 7, 10]
]

for n1, n2, esperado in testes:
    resultado = soma(n1, n2)
    print(f"{n1} + {n2} = {resultado}")
    assert resultado == esperado, f"Erro: esperado {esperado}, "
    f"obtido {resultado}"

print("✅ Todos os testes passaram!")
