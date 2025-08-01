def number_is_palinder(number):
    qtd_digitos = 0

    numeros_a_contar = number

    while numeros_a_contar > 0:
        numeros_a_contar //= 10
        qtd_digitos += 1

    while qtd_digitos > 1:
        # Pega o primeiro
        primeiro = number // (10**(qtd_digitos-1))
        # Pega o último
        ultimo = number % 10

        if primeiro != ultimo:
            return False

        # Remove o primeiro dígito
        number = number % (10**(qtd_digitos - 1))
        # Remove o último dígito
        number = number // 10
        qtd_digitos -= 2
    return True


def number_is_palinder_2(number):
    return str(number) == str(number)[::-1]


def eh_palindromo(n):
    # Número original será comparado com sua versão invertida
    original = n
    invertido = 0

    while n > 0:
        ultimo_digito = n % 10           # pega o último dígito
        invertido = invertido * 10 + ultimo_digito  # adiciona no número invertido
        n //= 10                          # remove o último dígito

    return original == invertido


print(number_is_palinder(567765))
print(number_is_palinder_2(567765))
print(eh_palindromo(567765))
