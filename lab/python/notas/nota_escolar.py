def nota_escolar(nota):
    if nota >= 6:
        return "Aprovado"
    elif nota >= 4:
        return "Recuperação"
    else:
        return "Reprovado"


notas = [10, 7, 6.6, 6, 5.2, 5, 4.8, 4, 3, 3.7, 1, 0]
for nota in notas:
    print(nota_escolar(nota))
