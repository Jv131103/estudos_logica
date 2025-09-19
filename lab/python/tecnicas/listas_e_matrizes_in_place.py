def soma_listas_normal(a, b):
    return [x + y for x, y in zip(a, b)]


def soma_listas_inplace(a, b):
    for i, v in enumerate(b):
        a[i] += v
    return a


def soma_matrizes_normal(M1, M2):
    return [[a + b for a, b in zip(l1, l2)] for l1, l2 in zip(M1, M2)]


def soma_matrizes_inplace(M1, M2):
    for i in range(len(M1)):
        for j in range(len(M1[i])):
            M1[i][j] += M2[i][j]
    return M1


print("SOMA LISTA NORMAL:")
A = [1, 2, 3]
B = [10, 20, 30]
C = soma_listas_normal(A, B)
print("A:", A)  # [1, 2, 3]   (intacta)
print("B:", B)  # [10, 20, 30]
print("C:", C)  # [11, 22, 33]
print("SOMA LISTA IN-PLACE:")
A = [1, 2, 3]
B = [10, 20, 30]
soma_listas_inplace(A, B)
print("A:", A)  # [11, 22, 33] (alterada!)
print("B:", B)  # [10, 20, 30]

print()

# Inverter Listas
print("INVERTER NORMAL:")
L = [1, 2, 3, 4]
R = L[::-1]
print("L:", L)  # [1, 2, 3, 4]
print("R:", R)  # [4, 3, 2, 1]
print("INVERTER IN-PLACE:")
L = [1, 2, 3, 4]
i, j = 0, len(L) - 1
while i < j:
    L[i], L[j] = L[j], L[i]
    i += 1
    j -= 1
print("L:", L)  # [4, 3, 2, 1]

print()

print("SOMA MATRIZES NORMAL:")
M1 = [[1, 2], [3, 4]]
M2 = [[5, 6], [7, 8]]
M3 = soma_matrizes_normal(M1, M2)
print("M1:", M1)  # intacta
print("M2:", M2)  # intacta
print("M3:", M3)  # [[6, 8], [10, 12]]
print("SOMA MATRIZES IN-PLACE:")
M1 = [[1, 2], [3, 4]]
M2 = [[5, 6], [7, 8]]
soma_matrizes_inplace(M1, M2)
print("M1:", M1)  # [[6, 8], [10, 12]] (alterada!)
print("M2:", M2)  # intacta
