def ler_texto(caminho) -> str:
    with open(caminho, "r") as file:
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
        print("Erro: arquivo não encontrado.")
        return
    except PermissionError:
        print("Erro: permissão negada para ler o arquivo.")
        return

    print(f"caracteres: {contar_caracteres(texto)}")
    print(f"linhas: {contar_linhas(texto)}")
    print(f"palavras: {contar_palavras(texto)}")


if __name__ == "__main__":
    main()
