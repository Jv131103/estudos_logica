def raiz(indice=2, radicando=0, casas_decimais=None):
    indice = abs(indice)
    radicando = abs(radicando)
    resultado = radicando ** (1/indice)
    return round(
        resultado,
        casas_decimais
    ) if casas_decimais is not None else resultado


def raiz_newton(n, x, precisao=1e-7, casas_decimais=None):
    r = x / 2  # chute inicial
    while True:
        novo_r = (1/n) * ((n-1)*r + x/(r**(n-1)))
        if abs(novo_r - r) < precisao:
            return round(
                novo_r,
                casas_decimais
            ) if casas_decimais is not None else novo_r
        r = novo_r


def raiz_busca_binaria(n, x, precisao=1e-7, casas_decimais=None):
    baixo, alto = 0, max(1, x)
    while alto - baixo > precisao:
        meio = (baixo + alto) / 2
        if meio**n < x:
            baixo = meio
        else:
            alto = meio
    return round(
        (baixo + alto) / 2,
        casas_decimais
    ) if casas_decimais is not None else (baixo + alto) / 2


print(raiz(2, 4))   # √4 = 2
print(raiz(3, 9, 2))   # ∛9 ≈ 2.08
print(raiz(4, 12, 2))  # ⁴√12 ≈ 1.86
print()
print(raiz_newton(2, 4, casas_decimais=2))    # 2.0
print(raiz_newton(3, 9, casas_decimais=2))    # ~2.08
print(raiz_newton(4, 12, casas_decimais=2))   # ~1.86
print()
print(raiz_busca_binaria(2, 4, casas_decimais=2))   # 2.0
print(raiz_busca_binaria(3, 9, casas_decimais=2))   # ~2.08
