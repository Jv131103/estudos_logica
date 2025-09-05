import math


def quadrado(n):
    return math.pow(n, 2)


def quadrado2(n):
    return n**2


def quadrado3(n):
    return n * n


n = int(input())
print(quadrado(n))
print(quadrado2(n))
print(quadrado3(n))
