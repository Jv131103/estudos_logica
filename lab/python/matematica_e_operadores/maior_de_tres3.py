def maior_de_tres(n1, n2, n3):
    maior = n1
    if n2 > maior:
        maior = n2
    if n3 > maior:
        maior = n3
    return maior


testes = [
    (1, 2, 3),
    (3, 2, 1),
    (1, 3, 2),
    (5, 5, 5),
    (5, 5, 3),
    (-1, -5, -3),
    (10, 10, 11),
]

for t in testes:
    print(f"Maior entre {t} = {maior_de_tres(*t)}")
