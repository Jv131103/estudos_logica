#include <stdio.h>
#define MAX 100

typedef struct {
    int stack[MAX];
    int topo;
    int valor_removido;
} Pilha;

void initPilha(Pilha *p) {
    p->topo = -1;
    p->valor_removido = 0;
}

void push(Pilha *p, int valor) {
    if (p->topo == MAX - 1) {
        printf("Erro: pilha cheia\n");
        return;
    }
    p->stack[++p->topo] = valor;
}

int pop(Pilha *p) {
    if (p->topo == -1) {
        printf("Erro: pilha vazia\n");
        return -1;
    }
    p->valor_removido = p->stack[p->topo--];
    return p->valor_removido;
}

void viewPilha(Pilha *p) {
    printf("Pilha: ");
    for (int i = 0; i <= p->topo; i++) {
        printf("%d ", p->stack[i]);
    }
    printf("\nValor do topo: %s\n", (p->topo >= 0) ? "OK" : "NULL");
    printf("Último removido: %d\n", p->valor_removido);
}

int main() {
    Pilha p;
    initPilha(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);
    viewPilha(&p);

    printf("Pop: %d\n", pop(&p));
    viewPilha(&p);

    return 0;
}
