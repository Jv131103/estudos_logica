def conceito(nota):
    if nota < 0 or nota > 10:
        raise ValueError("Nota inválida")

    if nota >= 9:
        return "A"
    elif nota >= 7:
        return "B"
    elif nota >= 5:
        return "C"
    else:
        return "D"


notas = [10, 9.95, 9, 8, 8.2, 7, 6.99, 7.35, 5.97, 5, 6, 4, 3, 2, 1, 0]
for nota in notas:
    print(conceito(nota))
