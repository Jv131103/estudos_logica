import re


def is_email(email):
    return bool(re.match(r"^[\w\.-]+@[\w\.-]+\.\w{2,}$", email))


def extract_dominio(email):
    if not is_email(email):
        return "Não é EMAIL"
    match = re.search(r"@([\w.-]+\.[a-zA-Z]{2,})$", email)
    return match.group(1) if match else "Domínio não encontrado"


data_emails = [
    'teste@email.com.br',
    "olamundo.com",
    "jvj12@teste.com",
    "teste@gmail.com"
]

for data_email in data_emails:
    print(f"{data_email:25} -> {extract_dominio(data_email)}")
