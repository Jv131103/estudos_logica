def par_ou_impar(numero):
    if numero % 2 == 0:
        return "PAR"
    else:
        return "ÍMPAR"


def par_ou_impar2(numero):
    return "PAR" if numero % 2 == 0 else "IMPAR"


print(par_ou_impar(2))
print(par_ou_impar(3))
print(par_ou_impar(-4))
print(par_ou_impar2(2))
print(par_ou_impar2(3))
print(par_ou_impar2(-4))
