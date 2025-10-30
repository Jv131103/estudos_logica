class Produzir:
    contador = 0  # variável de classe (compartilhada)

    def __init__(self):
        # toda vez que um novo objeto é criado:
        Produzir.contador += 1  # aumenta o contador da classe

    def __repr__(self):
        return f"Criados {self.contador} objetos"


p1 = Produzir()
p2 = Produzir()
p3 = Produzir()
print(p3)
