import re


def contagem_de_vogais(texto):
    vogais = "aeiouãẽĩõũáéíóúàèìòùâêîôû"
    contador = 0
    for palavra in texto.lower():
        if palavra in vogais:
            contador += 1
    return contador


def contagem_vogais_versao_regex(texto):
    # O padrão abaixo procura qualquer vogal (maiúscula ou minúscula)
    padrao = r"[aeiouãẽĩõũáéíóúàèìòùâêîôûAEIOUÃẼĨÕŨÁÉÍÓÚÀÈÌÒÙÂÊÎÔÛ]"
    vogais = re.findall(padrao, texto)
    return len(vogais)


print(contagem_de_vogais('Programação'))
print(contagem_vogais_versao_regex('Programação'))
