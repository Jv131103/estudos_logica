def inverter_string(texto, i=1):
    if texto == "":                # trata vazio
        return ""
    ultima_posicao = len(texto) - i
    if ultima_posicao <= 0:
        return texto[ultima_posicao]
    return texto[ultima_posicao] + inverter_string(texto, i=i+1)


def inverter_string_pythonico(s):
    if len(s) <= 1:
        return s
    return s[-1] + inverter_string(s[:-1])


print(inverter_string("casa"))
print(inverter_string("radar"))
print(inverter_string("254"))
print()
print(inverter_string_pythonico("casa"))
print(inverter_string_pythonico("radar"))
print(inverter_string_pythonico("254"))
