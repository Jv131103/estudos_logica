def normalizar(string):
    """
    Função responsável por editar strings
    """
    return string.lower().replace(" ", "")


def is_palinder(string):
    """
    Verifica se uma string é palíndroma ou não
    """
    if not string:
        return False

    new_string = normalizar(string)

    return new_string == new_string[::-1]


testes = ["", "a", "aa", "ab", "Radar", "a sac a"]
for teste in testes:
    if is_palinder(teste):
        print("SIM")
    else:
        print("NÃO")
