import re


def is_cpf(cpf):
    cpf = cpf.strip()
    return bool(re.match(r"^\d{3}\.\d{3}\.\d{3}-\d{2}$", cpf))


cpfs = [
    "123.456.789-10",
    "111.111.111-11",
    "12345678910",
    "12.3456.789-10",
    "123.456.789-100"
]

for cpf in cpfs:
    print(f"{cpf} -> {'Válido' if is_cpf(cpf) else 'Inválido'}")
