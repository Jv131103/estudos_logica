import re


def my_replace1(string, palavra_a_trocar, troca):
    return string.replace(palavra_a_trocar, troca)


def my_replace2(string, palavra_a_trocar, troca):
    new = ""
    string = string.split()
    for texto in string:
        if texto == palavra_a_trocar:
            new += troca + " "
        elif palavra_a_trocar in texto:
            for p in texto:
                if p == palavra_a_trocar:
                    new += troca + " "
                    break
                new += p
        else:
            new += texto + " "

    return new


def my_replace3(string, palavra_a_trocar, troca, ignore_case=False):
    flags = re.IGNORECASE if ignore_case else 0
    return re.sub(re.escape(palavra_a_trocar), troca, string, flags=flags)


print(my_replace1('Eu gosto de Python', "Python", "C"))
print(my_replace2('Eu gosto de Python', "Python", "C"))
print(my_replace3('Eu gosto de Python', "Python", "C"))
print()
print(my_replace1('Eu', "Eu", "Salve Cachorro"))
print(my_replace2('Eu', "Eu", "Salve Cachorro"))
print(my_replace3('Eu', "Eu", "Salve Cachorro"))
print()
print(my_replace1('Droga, errei aqui,', ",", " "))
print(my_replace2('Droga, errei aqui,', ",", " "))
print(my_replace3('Droga, errei aqui,', ",", " "))
