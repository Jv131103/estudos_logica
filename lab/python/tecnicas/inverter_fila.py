class Fila:
    def __init__(self) -> None:
        self.fila = []
        self.valor_removido = None

    def enqueue(self, valor) -> None:
        self.fila.append(valor)

    def dequeue(self):
        if not self.fila:  # checa se está vazia
            print("Erro: fila vazia")
            return None
        self.valor_removido = self.fila.pop(0)
        return self.valor_removido

    def view_fila(self) -> None:
        print("Fila:", self.fila)
        print("Próximo a sair:", self.fila[0] if self.fila else None)
        print("Último removido:", self.valor_removido)

    def reverse(self):
        if not self.fila:  # checa se está vazia
            print("Erro: fila vazia")
            return None

        tamanho = len(self.fila)
        for i in range(tamanho // 2):
            temp = self.fila[tamanho - 1 - i]
            self.fila[tamanho - 1 - i] = self.fila[i]
            self.fila[i] = temp

        return self.fila

    def __repr__(self) -> str:
        return f"Fila({self.fila})"


p = Fila()
p.enqueue(1)
p.enqueue(2)
p.enqueue(3)
p.enqueue(4)
p.reverse()
print(p)
