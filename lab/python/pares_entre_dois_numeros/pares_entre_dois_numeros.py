def pares_entre_dois_numeros(m, n):
    bestVal = -float("inf")
    bestX = bestY = 0
    for x in range(0, m):
        for y in range(0, n):
            E = x * y - x * x + y
            if E > bestVal:
                bestVal = E
                bestX = x
                bestY = y

    print(bestX, bestY, bestVal)


pares_entre_dois_numeros(2, 4)
