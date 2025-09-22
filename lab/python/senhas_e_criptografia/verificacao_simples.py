SENHA_ARMAZENADA = "1234"


def verificar_senha(senha):
    return senha == SENHA_ARMAZENADA


def main():
    MAX_TENTATIVAS = 3
    tentativas = 0

    while tentativas < MAX_TENTATIVAS:
        senha = input(
            f"DIGITE A SENHA: [tentativa {tentativas+1}/{MAX_TENTATIVAS}] "
        )
        if verificar_senha(senha):
            print("ACESSO PERMITIDO")
            print("SEJA BEM VINDO!")
            break
        print("SENHA INVÁLIDA!")
        tentativas += 1
    else:
        print("LIMITE DE TENTATIVAS EXCEDIDO")


main()
