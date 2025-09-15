def classificacao_etaria(idade):
    if idade < 0:
        raise ValueError("Idade inválida!")
    elif idade <= 12:
        return "Criança"
    elif idade <= 17:
        return "Adolescente"
    elif idade <= 59:
        return "Adulto"
    else:
        return "Idoso"


testes = [0, 1, 9, 12, 13, 15, 16, 17, 18, 25, 35, 45, 59, 60, 65, 70, 90]
for idade in testes:
    print(classificacao_etaria(idade))
