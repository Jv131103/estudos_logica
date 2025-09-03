print("Digite as 3 notas no seguinte formato: x y z")
n1, n2, n3 = input().split()
try:
    n1 = float(n1.replace(",", "."))
    n2 = float(n2.replace(",", "."))
    n3 = float(n3.replace(",", "."))
    media = (n1 + n2 + n3) / 3
    print(f"Média {media:.1f}")
except ValueError:
    print("Valor inválido! As notas precisam ser do tipo Numérico")
