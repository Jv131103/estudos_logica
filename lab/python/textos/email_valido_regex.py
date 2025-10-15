import re


def is_email(email):
    # Se quiser aceitar subdomínios, TLDs longos e + em emails
    # (como meu.nome+teste@gmail.com), use:
    # r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$"
    return True if re.match(r"^[\w\.-]+@[\w\.-]+\.\w{2,}$", email) else False


data_emails = ['teste@email.com', "olamundo.com", "jvj12@teste.com"]

for data_email in data_emails:
    if is_email(data_email):
        print(f"{data_email} → Válido")
    else:
        print(f"{data_email} → Inválido")
