def minuscula_e_maiuscula1(texto):
    print("VERSÃO 1: upper e lower")
    print(texto.lower())
    print(texto.upper())


def minuscula_e_maiuscula2(texto):
    print("VERSÃO 2: ASCII manual")
    minusculas = ""
    maiusculas = ""

    for c in texto:
        if 'A' <= c <= 'Z':  # Se for maiúscula
            minusculas += chr(ord(c) + 32)
            maiusculas += c
        elif 'a' <= c <= 'z':  # Se for minúscula
            minusculas += c
            maiusculas += chr(ord(c) - 32)
        else:
            # Mantém outros símbolos (espaço, pontuação, etc.)
            minusculas += c
            maiusculas += c

    print(minusculas)
    print(maiusculas)


def minuscula_e_maiuscula3(texto):
    print("VERSÃO 3: maketrans (Usa mapeamento de substituição)")
    letras_maiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    letras_minusculas = "abcdefghijklmnopqrstuvwxyz"

    mapa_minusculas = str.maketrans(letras_maiusculas, letras_minusculas)
    mapa_maiusculas = str.maketrans(letras_minusculas, letras_maiusculas)

    print(texto.translate(mapa_minusculas))
    print(texto.translate(mapa_maiusculas))


testes = "Ola", "TESTE", "salve", "Python"
for strings in testes:
    minuscula_e_maiuscula1(strings)
    minuscula_e_maiuscula2(strings)
    minuscula_e_maiuscula3(strings)
    print()
