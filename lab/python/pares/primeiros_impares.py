def modelo1(limite):
    contador = 1
    impares = 1
    while contador <= limite:
        if impares % 2 != 0:
            print(impares)
        impares += 2
        contador += 1


def modelo2(limite):
    i = 0
    impar = 1
    while i < limite:
        print(impar)
        i += 1
        impar += 2


if __name__ == "__main__":
    limite = int(input("Defina o limite para ver os ímpares: "))
    modelo1(limite)
    print("++" * 30)
    modelo2(limite)
