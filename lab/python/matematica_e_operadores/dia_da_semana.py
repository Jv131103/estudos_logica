def dia_da_semana(numero):
    if numero < 1 or numero > 7:
        raise ValueError("Número inválido: escolha entre 1 e 7.")

    dias = [
        "Segunda-feira",
        "Terça-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sábado",
        "Domingo"
    ]

    return dias[numero - 1]


for i in range(1, 8):
    print(dia_da_semana(i))
