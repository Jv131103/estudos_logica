from mdc import mdc


def mmc(a, b):
    if a == 0 or b == 0:
        return 0
    return abs(a*b) // mdc(a, b)


if __name__ == "__main__":
    print(mmc(12, 18))
