#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

float valor_em_estoque(Produto* p) {
    return p->preco * p->quantidade;
}

void mostrar_produto(Produto* p) {
    if (p->preco == 0)
        printf("SEM VALOR DEFINIDO\n");
    else if (p->quantidade == 0)
        printf("ITEM FORA DE ESTOQUE OU ESGOTADO\n");
    else
        printf("Produto (%s, %d, %.2f) - R$ %.2f\n", p->nome, p->quantidade, p->preco, valor_em_estoque(p));
}

void vender(Produto* p, int qtd) {
    if (qtd >= p->quantidade) {
        printf("Item fora de estoque, por favor pegue outro produto\n");
        return;
    }
    p->quantidade -= qtd;
    printf("Ficou: R$ %.2f\n", valor_em_estoque(p));
    printf("Quantidade em estoque: %d\n", p->quantidade);
}

int main() {
    Produto p;
    strcpy(p.nome, "Chave Micha - Kit");
    p.preco = 45.98;
    p.quantidade = 5;

    mostrar_produto(&p);

    vender(&p, 2);
    vender(&p, 2);
    vender(&p, 1);

    return 0;
}
