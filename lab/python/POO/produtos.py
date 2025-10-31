class Produto:
    def __init__(self, nome="SEM NOME", preco=0.0, quantidade=0) -> None:
        self.nome = nome
        self.preco = preco
        self.quantidade = quantidade

    def valor_em_estoque(self):
        return self.preco * self.quantidade

    def __repr__(self) -> str:
        if self.preco == 0:
            r = "SEM VALOR DEFINIDO"
        elif self.quantidade == 0:
            r = "ITEM FORA DE ESTOQUE OU ESGOTADO"
        else:
            r = self.valor_em_estoque()
        return (
            f"Produto ({self.nome}, {self.quantidade}, {self.preco}) " +
            f"- R$ {r:.2f}"
            )


class Vendas:
    def __init__(self, produto) -> None:
        self.produto = produto

    def vender(self, quantidade):
        if quantidade >= self.produto.quantidade:
            print("Item fora de estoque, por favor pegue outro produto")
            return
        self.produto.quantidade -= quantidade
        print(f"Ficou: R$ {self.produto.valor_em_estoque():.2f}")
        print(f"Quantidade em estoque: {self.produto.quantidade}")


p = Produto("Chave Micha - Kit", 45.98, 5)
print(p)

venda1 = Vendas(p)
venda1.vender(2)
venda1.vender(2)
venda1.vender(1)
