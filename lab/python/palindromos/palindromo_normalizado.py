import unicodedata


def remover_acentos(txt: str) -> str:
    nfkd = unicodedata.normalize("NFKD", txt)
    return "".join(c for c in nfkd if not unicodedata.combining(c))


def palinder(text):
    text = remover_acentos(text.strip().lower())
    original = text

    contrario = ""
    for i in range(len(text)-1, -1, -1):
        contrario += text[i]

    return contrario == original


def palinder2(text):
    text = remover_acentos(text.strip().lower())
    original = list(text)

    contrario = []
    for i in range(len(text)-1, -1, -1):
        contrario.append(text[i])

    return original == contrario


def palinder3(text):
    text = remover_acentos(text.strip().lower())
    return text == text[::-1]


print(palinder("abá"))
print(palinder2("abá"))
print(palinder2("abá"))
