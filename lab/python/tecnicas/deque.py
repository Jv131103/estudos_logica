class Deque:
    def __init__(self):
        self.dados = []

    def push_front(self, valor):
        # Inserir no início → desloca elementos
        self.dados = [valor] + self.dados

    def push_back(self, valor):
        # Inserir no final
        self.dados.append(valor)

    def pop_front(self):
        if not self.dados:
            print("Deque vazio!")
            return None
        return self.dados.pop(0)  # remove o primeiro

    def pop_back(self):
        if not self.dados:
            print("Deque vazio!")
            return None
        return self.dados.pop()  # remove o último

    def __repr__(self):
        return f"Deque: {self.dados}"


# Teste
deque = Deque()
deque.push_front(1)
deque.push_back(2)
deque.pop_front()
print("Deque final:", deque.dados)
