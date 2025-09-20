def maioridade(idade: int) -> str:
    if idade < 0:
        raise ValueError("Idade inválida")
    return "Maior de idade" if idade >= 18 else "Menor de idade"


# Testes
for idade in [0, 5, 17, 18, 20, 99]:
    print(f"{idade}: {maioridade(idade)}")
