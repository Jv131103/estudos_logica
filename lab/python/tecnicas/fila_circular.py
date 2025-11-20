class FilaCircular:
    def __init__(self, tamanho) -> None:
        self.tamanho = tamanho
        self.fila = [None] * tamanho
        self.front = 0
        self.rear = 0
        self.quantidade = 0

    def enfileirar(self, valor):
        if self.quantidade == self.tamanho:
            print("Fila cheia!")
            return

        self.fila[self.rear] = valor
        self.rear = (self.rear + 1) % self.tamanho
        self.quantidade += 1

    def desenfileirar(self):
        if self.quantidade == 0:
            print("Fila vazia!")
            return

        valor = self.fila[self.front]
        self.fila[self.front] = None  # opcional — apenas para visualização
        self.front = (self.front + 1) % self.tamanho
        self.quantidade -= 1
        return valor

    def __str__(self):
        return f"Fila: {self.fila} | front={self.front} | rear={self.rear} | qtd={self.quantidade}"


fila = FilaCircular(3)
fila.enfileirar(10)
fila.enfileirar(20)
fila.enfileirar(30)
print(fila)

print(fila.desenfileirar())
fila.enfileirar(40)
print(fila)
