def maior_e_menor(*valores):
    print(f"Maior = {max(valores)}")
    print(f"Menor = {min(valores)}")


def maior_e_menor2(valores):
    if not isinstance(valores, list):
        print("Tipo de dado inválido!")
    elif not valores:
        print("Vazio!")
    else:
        print(f"Maior = {max(valores)}")
        print(f"Menor = {min(valores)}")


def maior_e_menor3(valores):
    if not isinstance(valores, list):
        print("Tipo de dado inválido!")
    elif not valores:
        print("Vazio!")
    else:
        maior = valores[0]
        menor = valores[0]
        for i in range(len(valores)):
            if valores[i] > maior:
                maior = valores[i]
            elif valores[i] < menor:
                menor = valores[i]
        print(f"Maior = {maior}")
        print(f"Menor = {menor}")


def maior_e_menor4(valores):
    if not isinstance(valores, list):
        print("Tipo de dado inválido!")
    elif not valores:
        print("Vazio!")
    else:
        ordenada = sorted(valores)
        menor = ordenada[0]
        maior = ordenada[-1]
        print(f"Maior = {maior}")
        print(f"Menor = {menor}")


maior_e_menor(3, 8, 1, 9, 2)
print()
maior_e_menor2([3, 8, 1, 9, 2])
print()
maior_e_menor3([3, 8, 1, 9, 2])
print()
maior_e_menor4([3, 8, 1, 9, 2])
