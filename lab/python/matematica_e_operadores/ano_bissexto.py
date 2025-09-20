def is_bissexto(year):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        return True
    return False


for ano in range(1999, 2025):
    if is_bissexto(ano):
        print(f"{ano} é Bissexto")
    else:
        print(f"{ano} Não é Bissexto")
