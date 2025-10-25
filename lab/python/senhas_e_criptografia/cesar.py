def cesar(texto, deslocamento=2):
    alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    texto = texto.upper()
    cifra = ""

    for letra in texto:
        if letra in alfabeto:
            # Posição da letra no alfabeto
            pos = alfabeto.index(letra)
            # Novo índice (com volta ao início usando módulo)
            nova_pos = (pos + deslocamento) % 26
            cifra += alfabeto[nova_pos]
        else:
            # Se não for letra, mantém igual (espaços, pontuação etc.)
            cifra += letra

    return cifra


def cesar2(texto, deslocamento):
    texto = texto.upper()
    resultado = ""

    for letra in texto:
        if 'A' <= letra <= 'Z':  # Só desloca letras
            # Pega posição de 0 a 25
            pos = ord(letra) - ord('A')
            # Soma o deslocamento e aplica módulo para "voltar" ao início
            nova_pos = (pos + deslocamento) % 26
            # Converte de volta pra letra
            nova_letra = chr(nova_pos + ord('A'))
            resultado += nova_letra
        else:
            # Mantém caracteres que não são letras (espaços, pontuação, etc.)
            resultado += letra

    return resultado


def cesar3(texto, deslocamento):
    alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    alfabeto_cifrado = alfabeto[deslocamento:] + alfabeto[:deslocamento]

    tabela = str.maketrans(alfabeto + alfabeto.lower(),
                           alfabeto_cifrado + alfabeto_cifrado.lower())

    return texto.upper().translate(tabela)


print(cesar("abc", 2))      # CDE
print(cesar("xyz", 3))      # ABC
print(cesar("Renato", 5))   # WJSFYT
print()
print(cesar2("abc", 2))      # CDE
print(cesar2("xyz", 3))      # ABC
print(cesar2("Renato", 5))   # WJSFYT
print()
print(cesar3("abc", 2))      # CDE
print(cesar3("xyz", 3))      # ABC
print(cesar3("Renato", 5))   # WJSFYT
