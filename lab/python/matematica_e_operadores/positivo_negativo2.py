def classificar_numero(numero):
    if numero == 0:
        return "Zero"
    elif numero > 0:
        return "Positivo"
    else:
        return "Negativo"


numeros = [-8, 0, 10, -3.14, 2.7]
for n in numeros:
    print(f"{n}: {classificar_numero(n)}")
