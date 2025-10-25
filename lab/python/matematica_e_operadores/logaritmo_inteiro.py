def log_n(n, b):
    contador = 0
    potencia = 1

    while potencia * b <= n:
        potencia = potencia * b
        contador = contador + 1

    return contador


print(log_n(16, 2))
