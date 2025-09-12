def ler_texto(caminho) -> str:
    with open(caminho, "r", encoding="utf-8") as file:
        return file.read()


def contar_caracteres(texto):
    return len(texto)


def contar_linhas(texto):
    return len(texto.splitlines())


def contar_palavras(texto):
    return len(texto.split())


def main():
    caminho = input("Digite o caminho do arquivo: ")
    try:
        texto = ler_texto(caminho)
    except FileNotFoundError:
        print("Erro: Arquivo não encontrado.")
        return
    except PermissionError:
        print("Erro: Permissão negada.")
        return

    print(f"Caracteres: {contar_caracteres(texto)}")
    print(f"Linhas: {contar_linhas(texto)}")
    print(f"Palavras: {contar_palavras(texto)}")


if __name__ == "__main__":
    main()
