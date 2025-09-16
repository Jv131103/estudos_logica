def par_impar_divisivel3(numero):
    try:
        numero = int(numero)  # garante que seja inteiro
    except (TypeError, ValueError):
        return "Entrada inválida"

    if numero % 2 == 0:
        return "Par"
    elif numero % 3 == 0:
        return "Ímpar e divisível por 3"
    else:
        return "Ímpar"


# Testes
numeros = [2, 9, 5, "Ola"]
for numero in numeros:
    print(par_impar_divisivel3(numero))
