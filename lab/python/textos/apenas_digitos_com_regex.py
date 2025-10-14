import re


def isdigit(value):
    if isinstance(value, (int, float, complex)):
        return "SIM"

    value = str(value).strip()
    pattern = r"^-?\d+(?:[\.,]\d+)?$"  # aceita ponto ou vírgula decimal
    return "SIM" if re.match(pattern, value) else "NÃO"


# Testes
print(isdigit("12345"))          # SIM
print(isdigit(12345))            # SIM
print(isdigit(complex(12345)))   # SIM
print(isdigit("-12345"))         # SIM
print(isdigit("12345.5"))        # SIM
print(isdigit("12345,5"))        # SIM
print(isdigit("  12345 "))       # SIM
print(isdigit("123a45"))         # NÃO
print(isdigit("-123a45"))        # NÃO
print(isdigit("-12 345"))        # NÃO
print(isdigit("abcde"))          # NÃO
print(isdigit("-abcde"))         # NÃO
