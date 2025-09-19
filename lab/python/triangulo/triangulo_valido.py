def eh_triangulo(a, b, c):
    if a < b + c and b < a + c and c < a + b:
        return "Válido"
    return "Inválido"


print(eh_triangulo(3, 4, 5))
print(eh_triangulo(1, 2, 3))
print(eh_triangulo(10, 2, 7))
