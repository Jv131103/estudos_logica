def calculadora_simples(n1, n2, operador):
    if operador == '+':
        return n1 + n2
    elif operador == '-':
        return n1 - n2
    elif operador == '*':
        return n1 * n2
    elif operador == "**":
        return n1**n2
    else:
        if n2 == 0:
            raise ZeroDivisionError('Erro de divisão por 0')
        if operador == "/":
            return n1 / n2
        elif operador == "//":
            return n1 // n2
        elif operador == "%":
            return n1 % n2


calculos = [
    [2, 2, '+'],
    [2, 2, '-'],
    [2, 2, '*'],
    [2, 2, '/'],
    [2, 2, '//'],
    [2, 2, '%'],
    [2, 2, '**'],
]

for calculo in calculos:
    n1, n2, op = calculo
    print(f"{n1} {op} {n2} = {calculadora_simples(n1, n2, op)}")
