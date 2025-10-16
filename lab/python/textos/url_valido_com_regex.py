import re


def is_url(url):
    return bool(
        re.match(r"^https?://[\w.-]+\.[a-zA-Z]{2,}(/[^\s]*)?$", url)
    )


urls = [
    "https://www.google.com",
    "http://meusite.org",
    "https://openai.com/research",
    "https://sub.dominio.gov.br/teste",
    "ftp://arquivo.com",           # inválido (não é http/https)
    "http://",                     # inválido
    "https://meu site.com",        # inválido (espaço)
    "https://meusite"              # inválido (sem TLD)
]

for u in urls:
    print(f"{u:35} -> {'Válido' if is_url(u) else 'Inválido'}")
