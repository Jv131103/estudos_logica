def number_is(number):
    if number == 0:
        return "Zero"
    elif number > 0:
        return "Positive"
    else:
        return "Negative"


numeros = list(range(-10, 11))
for numero in numeros:
    print(f"{numero} = {number_is(numero)}")
    print()
