class Produto {
  constructor(nome = "SEM NOME", preco = 0.0, quantidade = 0) {
    this.nome = nome;
    this.preco = preco;
    this.quantidade = quantidade;
  }

  valorEmEstoque() {
    return this.preco * this.quantidade;
  }

  toString() {
    let r;
    if (this.preco === 0) r = "SEM VALOR DEFINIDO";
    else if (this.quantidade === 0) r = "ITEM FORA DE ESTOQUE OU ESGOTADO";
    else r = this.valorEmEstoque().toFixed(2);
    return `Produto (${this.nome}, ${this.quantidade}, ${this.preco}) - R$ ${r}`;
  }
}

class Vendas {
  constructor(produto) {
    this.produto = produto;
  }

  vender(quantidade) {
    if (quantidade >= this.produto.quantidade) {
      console.log("Item fora de estoque, por favor pegue outro produto");
      return;
    }
    this.produto.quantidade -= quantidade;
    console.log(`Ficou: R$ ${this.produto.valorEmEstoque().toFixed(2)}`);
    console.log(`Quantidade em estoque: ${this.produto.quantidade}`);
  }
}


const p = new Produto("Chave Micha - Kit", 45.98, 5);
console.log(p.toString());

const venda1 = new Vendas(p);
venda1.vender(2);
venda1.vender(2);
venda1.vender(1);
