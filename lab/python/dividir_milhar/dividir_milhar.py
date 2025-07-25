import math


def imprimir_raizes_que_somam_suas_dezenas():
    for i in range(1000, 10000):
        parte_inteira = i // 100
        resto = i % 100
        raiz = i**(1/2)
        if raiz * raiz == i and raiz == parte_inteira + resto:
            print(f"{i} é um dos números a ser impresso. Raiz: {int(raiz)}")


def imprimir_raizes_que_somam_suas_dezenas_com_math():
    for i in range(1000, 10000):
        parte_inteira = i // 100
        resto = i % 100
        raiz = math.isqrt(i)
        if raiz * raiz == i and raiz == parte_inteira + resto:
            print(f"{i} é um dos números a ser impresso. Raiz: {raiz}")


def soma_dos_dois_digitos_mais_significativos(numero):
    return numero // 100


def soma_dos_dois_digitos_menos_significativos(numero):
    return numero % 100


def imprimir_raizes_especiais():
    for n in range(1000, 10000):
        parte_inteira = soma_dos_dois_digitos_mais_significativos(n)
        parte_decimal = soma_dos_dois_digitos_menos_significativos(n)
        raiz = math.isqrt(n)
        if raiz * raiz == n and raiz == parte_inteira + parte_decimal:
            print(f"{n} é um dos números a ser impresso. Raiz: {raiz}")


imprimir_raizes_que_somam_suas_dezenas()
print()
imprimir_raizes_que_somam_suas_dezenas_com_math()
print()
imprimir_raizes_especiais()
