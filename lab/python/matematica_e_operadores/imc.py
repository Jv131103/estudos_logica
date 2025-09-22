def imc(peso, altura):
    valor = peso / altura**2
    if valor < 18.5:
        return f"{valor:.1f} - Abaixo do Peso"
    elif valor <= 24.9:
        return f"{valor:.1f} - Normal"
    elif valor <= 29.9:
        return f"{valor:.1f} - Sobrepeso"
    else:
        return f"{valor:.1f} - Obesidade"


print(imc(70, 1.75))
