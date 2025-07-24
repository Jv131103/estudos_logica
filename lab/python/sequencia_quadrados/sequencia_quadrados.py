def retornar_quadrados(n):
    return n**2


def main():
    while True:
        try:
            valor = int(input("Digite um número: "))
            if valor == 0:
                break
            quadrado = retornar_quadrados(valor)
            print(f"O quadrado de {valor} é igual a {quadrado}")
        except ValueError:
            print("Tipo inválido ... Digite apenas números inteiros")


if __name__ == '__main__':
    main()
