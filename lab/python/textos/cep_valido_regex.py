import re


def is_cep(cep):
    # Pythonico: ^\d{5}-\d{3}$
    cep = cep.strip()
    return True if re.match(r"^[0-9]{5}-[0-9]{3}$", cep) else False


data_ceps = ["12345-678", "0028978-123", "99990-9999", "24561-009"]
for data_cep in data_ceps:
    if is_cep(data_cep):
        print(f"{data_cep} -> Válido")
    else:
        print(f"{data_cep} ->: Inválido")
