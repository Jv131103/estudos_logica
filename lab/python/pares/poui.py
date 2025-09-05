def par_ou_impar(numero):
    return numero % 2 == 0


numero = int(input())
if par_ou_impar(numero):
    print("Par")
else:
    print("Impar")
