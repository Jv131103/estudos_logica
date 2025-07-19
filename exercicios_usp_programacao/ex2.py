def retornar_soma_gaus(n):
	return (n / 2) * (1 + n)


def main_modelo1():
	valor = int(input("Digite um número: "))
	soma = int(retornar_soma_gaus(valor))
	print(f"A soma é {soma}")

def main_modelo2():
	valor = int(input("Digite um número: "))
	contador = 0
	soma = 0
	while contador <= valor:
		soma += contador
		contador += 1
	print(f"A soma é {soma}")

def main_modelo3():
	n = int(input("Digite o valor de n: "))

	soma = n * (n + 1) // 2

	print(f"A soma é {soma}")



if __name__ == "__main__":
	main_modelo1()
	main_modelo2()
	main_modelo3()
