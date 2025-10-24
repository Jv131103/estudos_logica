def convert_to_base(number, base):
    if number < 2 and number > 16:
        return ""

    digits = "0123456789ABCDEF"
    result = ""
    while number > 0:
        resto = number % base
        result = digits[resto] + result
        number //= base

    return result


print(convert_to_base(25, 2))    # 11001
print(convert_to_base(25, 3))    # 221
print(convert_to_base(255, 16))  # FF
print(convert_to_base(100, 8))   # 144
