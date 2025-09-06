def contagem1(string):
    return len(string)


def contagem2(string):
    tam = 0
    for _ in string:
        tam += 1

    return tam


def contagem3(string):
    string += "\0"

    cont = 0
    while string[cont] != "\0":
        cont += 1
    return cont


string = input()
print(contagem1(string))
print(contagem2(string))
print(contagem3(string))
