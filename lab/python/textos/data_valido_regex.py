import re


def is_valid_date(date):
    return bool(
        re.match(r"^(0[1-9]|[12]\d|3[01])/(0[1-9]|1[0-2])/\d{2,4}$", date)
    )


dates = [
    "25/12/2025",
    "23/02/25",
    "13/12/2025",
    "45/19/2024",
    "00/00/00",
    "5/2/2024"
]

for d in dates:
    print(f"{d:10} -> {'Válida' if is_valid_date(d) else 'Inválida'}")
