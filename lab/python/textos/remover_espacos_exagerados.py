def remover_espacos_exagerados1(text, one_pharase=False):
    text = text.strip()

    if one_pharase:
        return text.replace(" ", "")

    uniao = ""
    cont = 0

    for line in text:
        if not line.isspace():
            uniao += line
            cont = 0
        else:
            if cont == 0:
                uniao += line
                cont += 1

    return uniao


def remover_espacos_exagerados2(text, one_pharase=False):
    text = text.strip()
    if one_pharase:
        return text.replace(" ", "")
    return " ".join(text.split())


texto = "esse  texto  veio todo quebrado"
print(remover_espacos_exagerados1(texto))
print(remover_espacos_exagerados2(texto))

texto = "o la"
print(remover_espacos_exagerados1(texto, one_pharase=True))
print(remover_espacos_exagerados2(texto, one_pharase=True))
