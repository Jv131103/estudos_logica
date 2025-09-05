def maior_entre_dois(n1, n2):
    return n1 if n1 > n2 else n2


def maior_entre_dois_enxuta(n1, n2):
    return max(n1, n2)


n1, n2 = map(int, input().split())
print(maior_entre_dois_enxuta(n1, n2))
