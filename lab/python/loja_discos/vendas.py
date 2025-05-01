def venda_discos_no_mes(nome_mes="MARÇO", bissexto=False):
    nome_mes = nome_mes.upper()
    meses = {
        "JANEIRO": 31,
        "FEVEREIRO": 28 if not bissexto else 29,
        "MARÇO": 31,
        "ABRIL": 30,
        "MAIO": 31,
        "JUNHO": 30,
        "JULHO": 31,
        "AGOSTO": 31,
        "SETEMBRO": 30,
        "OUTUBRO": 31,
        "NOVEMBRO": 30,
        "DEZEMBRO": 31
    }
    if meses.get(nome_mes):
        print(f"VENDAS NO MÊS DE {nome_mes}!")

        dia_do_mes = 1
        maior_venda = 0
        dia_maior_venda = 0
        while dia_do_mes <= meses[nome_mes]:
            vendas = int(
                input(f"Quantidades de discos vendidos no dia {dia_do_mes}: ")
            )
            if vendas > maior_venda:
                maior_venda = vendas
                dia_maior_venda = dia_do_mes
            dia_do_mes += 1

        print(
            f"O dia que mais houve vendas foi no dia {dia_maior_venda}",
            f"com {maior_venda} de discos."
        )
    else:
        print("Mês inválido!")


if __name__ == "__main__":
    venda_discos_no_mes()
