class Pilha:
    def __init__(self):
        self.stack = []
        self.valor_removido = None

    def push(self, value):
        self.stack.append(value)

    def pop(self):
        if not self.stack:  # checa se está vazia
            print("Erro: pilha vazia")
            return None
        self.valor_removido = self.stack.pop()
        return self.valor_removido

    def view_pilha(self):
        print("Pilha:", self.stack)
        print("Valor do topo:", self.stack[-1] if self.stack else None)
        print("Último removido:", self.valor_removido)


p = Pilha()

p.push(10)
p.push(20)
p.push(30)
p.view_pilha()

print("Pop:", p.pop())
p.view_pilha()
