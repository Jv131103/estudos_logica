def crivo_erastotenes(n):
    lista = [True] * n

    lista[0], lista[1] = False, False

    for p in range(2, int(n**0.5) + 1):
        if lista[p]:
            mult = p * p
            while mult < n:
                lista[mult] = False
                mult += p

    return [i for i in range(n) if lista[i]]


print(crivo_erastotenes(30))
