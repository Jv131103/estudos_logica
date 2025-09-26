def media_de_n_notas(n):
    for i in range(n):
        nota = float(input())
        if nota < 0 or nota > 10:
            return "nota inválida"
        if i == 0:
            soma = nota
        else:
            soma += nota
    return soma / n


def media_de_n_notas_comprimido(n):
    soma = 0
    for i in range(n):
        nota = float(input())
        if nota < 0 or nota > 10:
            return "nota inválida"
        soma += nota
    return soma / n


def media_de_n_notas_lista(n):
    notas = []
    for i in range(n):
        nota = float(input())
        if nota < 0 or nota > 10:
            return "nota inválida"
        notas.append(nota)
    return sum(notas) / n


def media_de_n_notas_lista_comprimido(n):
    notas = [float(input()) for _ in range(n)]
    if any(nota < 0 or nota > 10 for nota in notas):
        return "nota inválida"
    return sum(notas) / n


print("Média:", media_de_n_notas(4))
print("Média:", media_de_n_notas_comprimido(4))
print("Média:", media_de_n_notas_lista(4))
print("Média:", media_de_n_notas_lista_comprimido(4))
