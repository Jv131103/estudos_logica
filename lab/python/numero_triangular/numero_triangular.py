def is_triangular(n):
    # Calcula o discriminante (delta) da equação quadrática derivada da
    # fórmula do número triangular:
    # n = k * (k + 1) / 2  --> equação quadrática: k^2 + k - 2n = 0
    delta = 8 * n + 1  # Discriminante da fórmula de Bhaskara: Δ = b² - 4ac

    # Calcula a raiz quadrada de delta
    raiz = delta ** (1/2)

    # Arredonda a raiz para inteiro (para testar se é uma raiz exata)
    raiz_arredondada = int(raiz)

    # Verifica se a raiz quadrada é exata.
    # Se não for exata, então 'n' não é triangular, porque o delta não é
    # quadrado perfeito.
    if raiz_arredondada * raiz_arredondada != delta:
        return False

    # Calcula o valor de k usando a fórmula de Bhaskara simplificada:
    # k = (-b + √Δ) / 2a   --> como a = 1 e b = 1, então: k = (-1 + raiz) / 2
    resultado = (-1 + raiz_arredondada) / 2

    # Verifica se realmente k*(k+1)/2 é igual a n
    # Isso é uma checagem final por segurança contra possíveis erros de
    # arredondamento
    return resultado * (resultado + 1) / 2 == n


print(is_triangular(120))
print(is_triangular(23))
