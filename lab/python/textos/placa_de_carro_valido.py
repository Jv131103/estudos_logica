import re

# Antiga: LLL-NNNN (hífen opcional)
RE_ANTIGA = re.compile(r"^[A-Z]{3}-?\d{4}$")

# Mercosul: LLLNLNN (ex.: ABC1D23)
RE_MERCOSUL = re.compile(r"^[A-Z]{3}\d[A-Z]\d{2}$")


def validar_placa_br(placa: str):
    """
    Retorna (True, 'ANTIGA'|'MERCOSUL') se válida, senão (False, None).
    Aceita letras minúsculas e ignora espaços nas pontas.
    """
    p = placa.strip().upper()

    if RE_ANTIGA.match(p):
        return True, "ANTIGA"
    if RE_MERCOSUL.match(p):
        return True, "MERCOSUL"
    return False, ""


# Testes
placas = [
    "ABC-1234",   # antiga (com hífen)
    "ABC1234",    # antiga (sem hífen)
    "BRA2E19",    # mercosul
    "abc1d23",    # mercosul (minúsculas)
    "AB-1234",    # inválida
    "ABCD-1234",  # inválida
    "ABC12D3",    # inválida (ordem errada)
]

for p in placas:
    ok, tipo = validar_placa_br(p)
    print(f"{p:10} -> {'Válida: ' + tipo if ok else 'Inválida'}")
