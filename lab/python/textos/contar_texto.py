def retornar_informacoes_arquivo(arquivo):
    with open(arquivo, "r") as file:
        texto = file.read()
        print(f"caracteres: {len(texto)}")
        print(f"linhas: {len(texto.splitlines())}")
        print(f"palavras: {len(texto.split())}")


retornar_informacoes_arquivo("requirements.txt")
