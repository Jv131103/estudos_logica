class No:
    def __init__(self, valor) -> None:
        self.valor = valor
        self.proximo = None


class ListaEncadeada:
    def __init__(self) -> None:
        self.head = None  # Começo da lista

    def inserir(self, valor):
        novo_no = No(valor)

        # Se a lista estiver vazia
        if self.head is None:
            self.head = novo_no
            return

        # Se já houver elementos, percorre até o final
        atual = self.head
        while atual.proximo is not None:
            atual = atual.proximo

        # Adiciona o novo nó no final
        atual.proximo = novo_no

    def imprimir(self):
        atual = self.head
        while atual is not None:
            print(atual.valor, end=" → ")
            atual = atual.proximo
        print("None")


if __name__ == "__main__":
    lista = ListaEncadeada()
    lista.inserir(10)
    lista.inserir(20)
    lista.inserir(30)
    lista.imprimir()
