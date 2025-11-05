BASE = 10**4   # 4 dígitos por bloco (pode usar 10**9 em Python)


def to_chunks(n: int, base: int = BASE):
    """
    Quebra n em blocos (LSB-first).
    Ex.: 123456789 -> [6789, 3456, 12] para base=10**4
    """
    if n < 0:
        raise ValueError("Use n >= 0 neste exemplo simples.")
    if n == 0:
        return [0]
    chunks = []
    while n > 0:
        chunks.append(n % base)
        n //= base
    return chunks


def from_chunks(chunks, base: int = BASE):
    """Reconstrói o inteiro a partir dos blocos LSB-first."""
    n = 0
    for i in reversed(range(len(chunks))):
        n = n * base + chunks[i]
    return n


chunk = to_chunks(123456541122)
print(chunk)
print(from_chunks(chunk))
