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


f = Fila()
f.enqueue(10)
f.enqueue(20)
f.enqueue(30)
f.view_fila()
f.dequeue()
f.view_fila()
f.dequeue()
f.view_fila()
