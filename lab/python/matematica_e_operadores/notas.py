def notas(valor):
    valores = [100, 50, 20, 10, 5, 2, 1]

    for nota in valores:
        qtd = valor // nota
        print(f"{qtd} nota(s) de {nota}")
        valor %= nota


notas(289)
