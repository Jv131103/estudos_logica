import re


def encontrar_palavras_especificas(string, palavra):
    # rf"" permite interpolar variáveis dentro de regex
    resultado = re.findall(rf"\b{palavra}\w*", string, flags=re.IGNORECASE)
    return resultado


frase = "Eu gosto de programação e projetos produtivos"
resultado = encontrar_palavras_especificas(frase, "pro")
print(resultado)
