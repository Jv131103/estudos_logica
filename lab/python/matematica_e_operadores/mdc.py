def mdc(a, b):
    a, b = abs(a), abs(b)
    if a == 0 and b == 0:
        raise ValueError("MDC indefinido para (0,0)")

    while b != 0:
        a, b = b, a % b
    return a


if __name__ == "__main__":
    print(mdc(105, 50))
