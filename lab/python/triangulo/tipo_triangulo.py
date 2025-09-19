def tipo_triangulo(a, b, c):
    if a == b == c:
        return "Equilátero"
    elif a == b or b == c or a == c:
        return "Isósceles"
    else:
        return "Escaleno"


print(tipo_triangulo(5, 5, 5))  # Equilátero
print(tipo_triangulo(5, 5, 3))  # Isósceles
print(tipo_triangulo(5, 3, 5))  # Isósceles
print(tipo_triangulo(3, 5, 5))  # Isósceles
print(tipo_triangulo(3, 4, 5))  # Escaleno
