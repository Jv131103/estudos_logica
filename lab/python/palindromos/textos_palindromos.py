import re


def text_is_palinder(text):
    value = text.lower().replace(" ", "")
    value = re.sub(r'[^a-z0-9]', '', value)
    return value[::-1] == value


def text_is_palinder2(text):
    # tudo em minúsculas
    value = text.lower()
    # mantém apenas letras a-z e dígitos 0-9 (ignora acentos direto)
    value = re.sub(r'[^a-z0-9]', '', value)
    return value == value[::-1]


def text_is_palinder3(text):
    filtered = ""
    for c in text.lower():
        if ('a' <= c <= 'z') or ('0' <= c <= '9'):
            filtered += c
    return filtered == filtered[::-1]


print(text_is_palinder("Socorram-me subi no onibus em Marrocos!"))
print(text_is_palinder2("Socorram-me subi no onibus em Marrocos!"))
print(text_is_palinder3("Socorram-me subi no onibus em Marrocos!"))
