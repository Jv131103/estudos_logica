import re


def contar_palavras1(texto):
    return len(texto.strip().split())


def contar_palavras2(texto):
    texto = texto.strip()
    if not texto:
        return 0
    cont = 1  # Há pelo menos 1 frase sempre
    anterior = ""
    for palavra in texto:
        # CONSIDERO ASSIM, POIS A CADA ESPÇO INDICA QUE ACABOU A PALAVRA
        if palavra == " " and anterior != " ":
            cont += 1
        anterior = palavra
    return cont


def contar_palavras3(texto):
    # \w+ = sequência de caracteres alfanuméricos
    palavras = re.findall(r'\w+', texto.strip(), re.UNICODE)
    return len(palavras)


testes = ["Eu gosto de estudar programação", "Olá", "Olá Mundo", "", "   "]
for teste in testes:
    print(contar_palavras1(teste))
    print(contar_palavras2(teste))
    print(contar_palavras3(teste))
    print()
