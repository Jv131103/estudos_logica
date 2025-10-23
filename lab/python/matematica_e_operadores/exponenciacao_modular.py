def mod_pow(a, b, m):
    if m == 1:
        return 0
    a %= m
    res = 1
    while b > 0:
        if b & 1:
            res = (res * a) % m
        a = (a * a) % m
        b >>= 1
    return res


# Python também tem a built-in (muito otimizada):
# pow(a, b, m)
# Ex.: pow(3, 13, 7) -> 3
print(mod_pow(3, 13, 7))   # 3
print(pow(3, 13, 7))       # 3 (built-in)
