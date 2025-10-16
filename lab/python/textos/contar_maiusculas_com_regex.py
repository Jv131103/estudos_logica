import re


def contar_maiusculas(string):
    return len(re.findall(r"[A-ZÀ-Ý]", string))


print(contar_maiusculas("Eu Gosto de Programar em Python"))
