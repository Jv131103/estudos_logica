#include <stdio.h>
#define MAX 100

typedef struct {
    int fila[MAX];
    int inicio;
    int fim;
    int valor_removido;
} Fila;

void initFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->valor_removido = 0;
}

void enqueue(Fila *f, int valor) {
    if (f->fim == MAX) {
        printf("Erro: fila cheia\n");
        return;
    }
    f->fila[f->fim++] = valor;
}

int dequeue(Fila *f) {
    if (f->inicio == f->fim) {
        printf("Erro: fila vazia\n");
        return -1;
    }
    f->valor_removido = f->fila[f->inicio++];
    return f->valor_removido;
}

void viewFila(Fila *f) {
    printf("Fila: ");
    for (int i = f->inicio; i < f->fim; i++) {
        printf("%d ", f->fila[i]);
    }
    printf("\nPróximo a sair: %s\n", (f->inicio < f->fim) ? "OK" : "NULL");
    printf("Último removido: %d\n", f->valor_removido);
}

int main() {
    Fila f;
    initFila(&f);

    enqueue(&f, 10);
    enqueue(&f, 20);
    enqueue(&f, 30);
    viewFila(&f);

    dequeue(&f);
    viewFila(&f);

    return 0;
}
