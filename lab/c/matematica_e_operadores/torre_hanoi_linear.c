#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *itens;
    int topo;
} Pilha;

Pilha* criarPilha(int capacidade) {
    Pilha *p = malloc(sizeof(Pilha));
    p->itens = malloc(sizeof(int) * capacidade);
    p->topo = -1;
    return p;
}

int vazia(Pilha *p) {
    return p->topo == -1;
}

void push(Pilha *p, int valor) {
    p->itens[++p->topo] = valor;
}

int pop(Pilha *p) {
    return p->itens[p->topo--];
}

int topo(Pilha *p) {
    return p->itens[p->topo];
}

void mover(Pilha *origem, Pilha *destino, char nomeOrigem, char nomeDestino) {
    if (vazia(origem)) {
        push(origem, pop(destino));
        printf("Mova disco de %c para %c\n", nomeDestino, nomeOrigem);
    } else if (vazia(destino)) {
        push(destino, pop(origem));
        printf("Mova disco de %c para %c\n", nomeOrigem, nomeDestino);
    } else if (topo(origem) < topo(destino)) {
        push(destino, pop(origem));
        printf("Mova disco de %c para %c\n", nomeOrigem, nomeDestino);
    } else {
        push(origem, pop(destino));
        printf("Mova disco de %c para %c\n", nomeDestino, nomeOrigem);
    }
}

void torreHanoiIterativa(int n) {
    Pilha *origem = criarPilha(n);
    Pilha *destino = criarPilha(n);
    Pilha *auxiliar = criarPilha(n);

    // discos em ordem decrescente
    for (int i = n; i >= 1; i--) {
        push(origem, i);
    }

    char nomes[3] = {'A', 'C', 'B'};
    int totalMovimentos = (1 << n) - 1; // 2^n - 1

    if (n % 2 == 0) {
        nomes[1] = 'B';
        nomes[2] = 'C';
    }

    for (int i = 1; i <= totalMovimentos; i++) {
        if (i % 3 == 1) {
            mover(origem, destino, nomes[0], nomes[1]);
        } else if (i % 3 == 2) {
            mover(origem, auxiliar, nomes[0], nomes[2]);
        } else {
            mover(auxiliar, destino, nomes[2], nomes[1]);
        }
    }
}

int main() {
    torreHanoiIterativa(3);
    return 0;
}
