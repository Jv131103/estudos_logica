def contar_palavras(texto):
    texto = texto.lower().split()

    palavras = {}

    for palavra in texto:
        if palavra.isalpha():
            palavras[palavra] = palavras.get(palavra, 0) + 1

    # ordena pelo valor (decrescente)
    for palavra, freq in sorted(
        palavras.items(), key=lambda x: x[1], reverse=True
    ):
        print(f"{palavra}: {freq}")


def contar_palavras2(texto):
    texto = texto.lower().split()
    palavras = {}

    for palavra in texto:
        if palavra.isalpha():
            palavras[palavra] = palavras.get(palavra, 0) + 1

    # transforma em lista de tuplas (palavra, freq)
    lista = list(palavras.items())

    # selection sort pela frequência (decrescente)
    for i in range(len(lista)):
        max_idx = i
        for j in range(i + 1, len(lista)):
            if lista[j][1] > lista[max_idx][1]:
                max_idx = j
        lista[i], lista[max_idx] = lista[max_idx], lista[i]

    # imprime resultado
    for palavra, freq in lista:
        print(f"{palavra}: {freq}")


contar_palavras("hoje é dia de estudar estudar estudar python python")
print()
contar_palavras2("hoje é dia de estudar estudar estudar python python")
