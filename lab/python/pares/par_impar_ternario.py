def is_par_or_impar(num):
    """Retorna 'Par' se num é par, 'Impar' se num é ímpar, ou 'Não é inteiro'
    se num não é um inteiro."""
    if isinstance(num, bool):
        return "Não é inteiro"

    if not isinstance(num, (int, float)):
        return "Não é inteiro"
    return "Par" if num % 2 == 0 else "Impar"


# testes
def testes():
    for numeros in range(-5, 6):
        print(f"{numeros}: {is_par_or_impar(numeros)}")

    decimais = [-3.5, -2.0, 0.0, 4.2, 7.7, "salve", True, None]
    for n in decimais:
        print(f"{n}: {is_par_or_impar(n)}")


testes()
