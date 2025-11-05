import math


def fat_plano_a(n: int) -> int:
    """Fatorial com BigInt nativo do Python (iterativo, sem recursão)."""
    if n < 0:
        raise ValueError("Fatorial não é definido para n < 0.")
    if n <= 1:
        return 1
    acc = 1
    for k in range(2, n + 1):
        acc *= k
    return acc


def fat_plano_b(n: int, base: int = 10**9) -> str:
    """
    Fatorial 'caseiro' usando representação por blocos (chunks) LSB-first.
    - Sem usar BigInt da linguagem.
    - Iterativo (sem recursão).
    - Trata n=0/1 -> "1".
    - Retorna string decimal do resultado.
    """
    if n < 0:
        raise ValueError("Fatorial não é definido para n < 0.")
    if n <= 1:
        return "1"

    # número inicial = 1 em chunks (LSB-first)
    chunks = [1]  # cada item ∈ [0, base)

    def mul_small(chs, k, base):
        """
        Multiplica o 'número em chunks' por um inteiro pequeno k (in-place).
        """
        carry = 0
        for i in range(len(chs)):
            prod = chs[i] * k + carry
            chs[i] = prod % base
            carry = prod // base
        while carry:
            chs.append(carry % base)
            carry //= base

    # laço do fatorial
    for k in range(2, n + 1):
        mul_small(chunks, k, base)

    # formatação para string decimal
    width = len(str(base)) - 1  # dígitos por bloco
    out = [str(chunks[-1])]     # bloco mais significativo sem zeros à esquerda
    for x in reversed(chunks[:-1]):
        out.append(f"{x:0{width}d}")  # demais blocos com padding
    return "".join(out)


print(fat_plano_a(10))          # 3628800
print(fat_plano_b(10))          # "3628800"

# verificação rápida (n moderado):
for x in [0, 1, 5, 10, 100, 500]:
    ok = fat_plano_b(x) == str(math.factorial(x))
    print(x, ok)
