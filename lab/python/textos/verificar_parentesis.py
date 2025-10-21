class Pilha:
    def __init__(self):
        self.pilha = []

    def isEmpty(self):
        return not self.pilha  # True se estiver vazia

    def push(self, x):
        self.pilha.append(x)

    def pop(self):
        if self.isEmpty():
            return None
        return self.pilha.pop()

    def peek(self):
        if self.isEmpty():
            return None
        return self.pilha[-1]


def verifica_parenteses(string):
    pilha = Pilha()

    for char in string:
        if char == '(' or char == "{" or char == "[":
            pilha.push(char)
        elif char == ')' or char == "}" or char == "]":
            if pilha.isEmpty():  # Tentou fechar sem abrir
                return False
            pilha.pop()

    # No fim, se sobrou algo, está errado
    return pilha.isEmpty()


# Testes
strings = [
    "(())",       # balanceado
    "(()",        # falta fechar
    "())",        # fechou demais
    "",           # vazio (ok)
    "((()()))"    # balanceado
]

for s in strings:
    print(f"{s:10} -> {'Válido' if verifica_parenteses(s) else 'Inválido'}")
