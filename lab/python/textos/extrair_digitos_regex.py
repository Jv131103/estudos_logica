import re


def extrair_digitos(texto):
    numeros = re.findall(r"\d+", texto)
    return "".join(numeros)


# Teste
print(extrair_digitos("abc123def45"))   # 12345
print(extrair_digitos("telefone: (11) 98877-2233"))  # 11988772233
print(extrair_digitos("sem números aqui"))  # ""
