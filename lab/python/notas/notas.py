def maior_menor_nota(n):
    cont = 1
    maior = 0
    menor = 100
    while cont <= n:
        try:
            nota = float(input(f"Nota do aluno: {cont}: "))
        except ValueError:
            print("Digite apenmas números...")
            continue

        if nota > 100 or nota < 0:
            print("Nota inválida! Digite de 0 ate 100")
            continue

        if nota > maior:
            aluno_maior = cont
            maior = nota
        if nota < menor:
            aluno_menor = cont
            menor = nota

        cont += 1

    print(f"A Maior nota foi do aluno {aluno_maior} com {maior} nota")
    print(f"A Menor nota foi do aluno {aluno_menor} com {menor} nota")


if __name__ == "__main__":
    maior_menor_nota(10)
