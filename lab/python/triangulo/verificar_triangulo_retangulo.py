def is_right_triangle(a, b, c):
    if a > b and a > c:
        maior = a
        catetos = b**2 + c**2
    elif b > a and b > c:
        maior = b
        catetos = a**2 + c**2
    else:
        maior = c
        catetos = a**2 + b**2

    return maior**2 == catetos


def pythonic_is_rigth_triangle(a, b, c):
    lados = sorted([a, b, c])  # ordena os lados
    cateto1, cateto2, hipotenusa = lados  # os dois menores são catetos
    return hipotenusa**2 == cateto1**2 + cateto2**2


print(is_right_triangle(3, 4, 5))
print(is_right_triangle(3, 5, 4))
print(is_right_triangle(5, 4, 3))
print(is_right_triangle(10, 10, 50))
print()
print(pythonic_is_rigth_triangle(3, 4, 5))
print(pythonic_is_rigth_triangle(3, 5, 4))
print(pythonic_is_rigth_triangle(5, 4, 3))
print(pythonic_is_rigth_triangle(10, 10, 50))
