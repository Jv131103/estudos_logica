def fatorial(n):
    resultado = 1
    expressao = []
    for i in range(n, 0, -1):   # vai de n até 1
        resultado *= i
        expressao.append(str(i))
    print(" x ".join(expressao), "=", resultado)
    return resultado


fatorial(5)
