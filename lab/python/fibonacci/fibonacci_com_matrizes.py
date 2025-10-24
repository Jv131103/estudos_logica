def matmul(A, B):
    # Multiplica A (m×p) por B (p×n) → resultado (m×n)
    m, p = len(A), len(A[0])
    if p != len(B):
        raise ValueError(
            "Dimensões incompatíveis: A é {}x{}, B é {}x{}"
            .format(m, p, len(B), len(B[0]))
        )
    n = len(B[0])
    C = [[0] * n for _ in range(m)]
    for i in range(m):
        for k in range(p):
            aik = A[i][k]
            if aik != 0:
                for j in range(n):
                    C[i][j] += aik * B[k][j]
    return C


def eye(n):
    # Matriz identidade n×n
    identidade = [[0]*n for _ in range(n)]
    for i in range(n):
        identidade[i][i] = 1
    return identidade


def mat_pow(M, e):
    # Exponenciação rápida para matriz quadrada n×n
    n = len(M)
    if any(len(row) != n for row in M):
        raise ValueError(
            "A matriz precisa ser quadrada para elevar à potência."
        )
    R = eye(n)
    B = [row[:] for row in M]  # cópia
    while e > 0:
        if e & 1:
            R = matmul(R, B)
        B = matmul(B, B)
        e >>= 1
    return R


def fib(n):
    if n == 0:
        return 0
    # Matriz base de Fibonacci (2×2)
    F = [[1, 1],
         [1, 0]]
    Fn = mat_pow(F, n)
    return Fn[0][1]


print(fib(10))  # 55
