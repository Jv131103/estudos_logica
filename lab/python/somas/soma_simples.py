# Versão 1
def soma1(x, y):
    # print(x + y)
    return x + y


# Versão 2
def soma2(x, y):
    soma = x + y
    # print(soma)
    return soma

    
if __name__ == "__main__":
    # Versão 3
    x = float(input("X: "))
    y = float(input("Y: "))

    soma = x + y
    print("Soma:", soma)  # Ou definir apenas x + y dentro do print

    # Chamando outras versões:
    soma = soma1(x, y)
    print(f"Soma: {soma}")

    print("Soma: {soma}".format(soma=soma2(x, y)))
