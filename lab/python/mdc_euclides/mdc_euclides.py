def mdc(a, b):
    if b == 0:
        return a
    return mdc(b, a % b)


def mdc2(a, b):
    while b != 0:
        a, b = b, a % b
    return a


if __name__ == "__main__":
    print(mdc(18, 12))
    print(mdc2(18, 12))
