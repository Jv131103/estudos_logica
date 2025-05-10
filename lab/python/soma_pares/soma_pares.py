def gerar_lista():
    while True:
        try:
            limite = int(input("Tamanho da lista: "))
            break
        except ValueError:
            print("Digite um número inteiro válido.")
    lista = []
    for _ in range(limite):
        while True:
            try:
                n = int(input("Digite um número: "))
                lista.append(n)
                break
            except ValueError:
                print("Digite um número inteiro válido.")
    return lista


def soma_pares(iteravel):
    soma = 0

    for i in iteravel:
        if i % 2 == 0:
            soma += i

    return soma


if __name__ == "__main__":
    lista_somar_pares = gerar_lista()
    print(f"Resultado: {soma_pares(lista_somar_pares)}")
