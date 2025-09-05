def area_retangulo(base, altura):
    return base * altura


v1, v2 = input().split()
v1, v2 = float(v1), float(v2)

print(area_retangulo(v1, v2))
