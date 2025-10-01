def inverter_numero(number):
    inverso = 0
    while number > 0:
        resto = number % 10
        inverso = (inverso * 10) + resto
        number //= 10
    return inverso


def is_palindromo(number):
    if not isinstance(number, int):
        return False
    number = abs(number)
    return number == inverter_numero(number)


def main():
    numbers = [121, 242, 123, 321, 645, 111, 9999, 1000, -98, -989, "teste"]
    for number in numbers:
        print(
            number,
            "->",
            "Palíndromo" if is_palindromo(number) else "Não é palíndromo"
        )


main()
