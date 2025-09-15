def positive_or_negative(numero):
    if numero == 0:
        return "Zero"
    elif numero > 0:
        return "Positivo"
    else:
        return "Negativo"


# testes
for n in [-8, 0, 10, -3.14, 2.7]:
    print(f"{n}: {positive_or_negative(n)}")
