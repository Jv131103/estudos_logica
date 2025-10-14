import re


def contar_caracteres_especificos(string, caracter):
    if not caracter or len(caracter) != 1:
        raise ValueError(
            "O argumento 'caracter' deve conter apenas um caractere."
        )
    string = string.lower()
    caracter = caracter.lower()
    ocorrencias = 0
    for palavra in string:
        if palavra == caracter:
            ocorrencias += 1

    return ocorrencias


def contar_caracteres_especificos2(string, caracter):
    return string.lower().count(caracter.lower())


def contar_caracteres_especificos3(string, caracter):
    # rf = f-string para regex
    padrao = rf"[{caracter}áàâãäÁÀÂÃÄ]"
    return len(re.findall(padrao, string))


def contar_caracteres_especificos4(string, caracter):
    return sum(1 for c in string.lower() if c == caracter.lower())


print(contar_caracteres_especificos("abacaxi", 'a'))
print(contar_caracteres_especificos2("abacaxi", 'a'))
print(contar_caracteres_especificos3("abacaxi", 'a'))
print(contar_caracteres_especificos4("abacaxi", 'a'))
