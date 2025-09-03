def inverter(string):
    ultimo_indice = len(string) - 1

    invertido = ""
    for i in range(ultimo_indice, -1, -1):
        invertido += string[i]

    print(invertido)
    return invertido


inverter("casa")

if inverter("radar") == "radar":
    print("É palíndromo")
