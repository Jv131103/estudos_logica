class Array:
    def __init__(self, tamanho) -> None:
        self.tamanho = tamanho
        self.array = []

    def __repr__(self):
        return f"{self.__class__.__name__}({self.array})"

    def add(self, n):
        if len(self.array) >= self.tamanho:
            raise IndexError("Limite máximo atingido para o array")
        self.array.append(n)

    def delete(self):
        if len(self.array) <= 0:
            raise ValueError("Lista vazia para remover")
        self.array.pop()

    def sum_array(self):
        soma = 0
        for number in self.array:
            soma += number
        return soma


# Teste prático
if __name__ == "__main__":
    lista = Array(5)

    for i in range(1, 6):  # adiciona de 1 a 5
        lista.add(i)

    print("Array:", lista)
    print("Soma dos elementos:", lista.sum_array())

    # Testando erro (adicionar além do limite)
    try:
        lista.add(6)
    except IndexError as e:
        print("Erro esperado:", e)

    # Removendo e somando de novo
    lista.delete()
    print("Após remover um elemento:", lista)
    print("Soma atual:", lista.sum_array())
