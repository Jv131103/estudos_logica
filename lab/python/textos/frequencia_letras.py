def frequencia_letras(string):
    string = string.replace(" ", "").lower()
    contagem = {}
    for letra in string:
        if letra.isalpha():
            contagem[letra] = contagem.get(letra, 0) + 1

    string_ordenada = sorted(contagem)
    for letra in string_ordenada:
        print(f"{letra}: {contagem[letra]}")


string = input()
frequencia_letras(string)
