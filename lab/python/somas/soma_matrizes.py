def soma_matrizes(m1, m2):
    if len(m1) != len(m2) or any(len(l1) != len(l2) for l1, l2 in zip(m1, m2)):
        raise ValueError("Matrizes precisam ter o mesmo tamanho")

    m3 = []
    for i in range(len(m1)):
        linha_soma = []
        for j in range(len(m1[i])):
            linha_soma.append(m1[i][j] + m2[i][j])
        m3.append(linha_soma)
    return m3


def soma_matrizes_pythonico(m1, m2):
    return [
        [
            m1[i][j] + m2[i][j] for j in range(len(m1[0]))
        ] for i in range(len(m1))
    ]


def soma_matrizes_zip(m1, m2):
    return [[a + b for a, b in zip(l1, l2)] for l1, l2 in zip(m1, m2)]


def soma_matrizes_map(m1, m2):
    return [list(map(sum, zip(l1, l2))) for l1, l2 in zip(m1, m2)]


def soma_matrizes_inplace(m1, m2):
    for i in range(len(m1)):
        for j in range(len(m1[0])):
            m1[i][j] += m2[i][j]
    return m1


M1 = [
  [1, 2],
  [3, 4]
]

M2 = [
  [5, 6],
  [7, 8]
]

print("M3 =", soma_matrizes(M1, M2))
