def venda_discos_no_mes(nome_mes, bissexto=False):
    vendas_dia = []

    nome_mes = nome_mes.upper()

    meses30 = [
        "ABRIL",
        "JUNHO",
        "SETEMBRO",
        "NOVEMBRO"
    ]
    meses31 = [
        "JANEIRO",
        "MARÇO",
        "MAIO",
        "JULHO",
        "AGOSTO",
        "OUTUBRO",
        "DEZEMBRO"

    ]
    mes_especial = ["FEVEREIRO"]

    if nome_mes in meses30:
        qtd_dias = 30
    elif nome_mes in meses31:
        qtd_dias = 31
    elif nome_mes in mes_especial:
        qtd_dias = 28 if not bissexto else 29
    else:
        print("Mês inválido!")
        return

    print(f"VENDAS NO MÊS DE {nome_mes}!")
    for dia in range(1, qtd_dias+1):
        vendas = int(input(f"Quantidade de discos vendidos no dia {dia}: "))
        vendas_dia.append(vendas)

    maior_venda = max(vendas_dia)
    dia_maior_venda = vendas_dia.index(maior_venda) + 1

    print(
        f"O dia que mais houve vendas foi o dia {dia_maior_venda}",
        f"com {maior_venda} discos vendidos."
    )


if __name__ == "__main__":
    venda_discos_no_mes("JANEIRO")
