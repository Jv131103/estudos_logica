"""
Dada uma seqüência de números inteiros não-nulos, seguida por 0, 
imprimir seus quadrados.
"""

def retornar_quadrados(n):
	return n**2


def main():
	while True:
		valor = int(input("Digite um número: "))
		if valor == 0:
			break
		quadrado = retornar_quadrados(valor)
		print(f"O quadrado de {valor} é igual a {quadrado}")

if __name__ == "__main__":
	main()
