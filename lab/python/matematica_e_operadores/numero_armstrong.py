def is_number_armstrong(number):
    temp_calc = number
    lista = []
    while temp_calc != 0:
        resto = temp_calc % 10
        lista.append(resto)
        temp_calc //= 10

    soma_pot = 0
    expoente = len(lista)
    for valor in lista:
        soma_pot += valor ** expoente

    if soma_pot == number:
        return "Armstrong"
    return "Not Armstrong"


def is_armstrong(number):
    digits = str(number)
    n = len(digits)          # conta quantos dígitos
    soma = sum(int(d)**n for d in digits)
    return "Armstrong" if soma == number else "Not Armstrong"


print(is_number_armstrong(153))
print(is_number_armstrong(9474))
print(is_armstrong(153))
print(is_armstrong(9474))
