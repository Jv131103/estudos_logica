#include <stdio.h>

#define TAM 5  // tamanho da fila

typedef struct {
    int fila[TAM];
    int front;
    int rear;
    int quantidade;
} FilaCircular;

void inicializar(FilaCircular *f) {
    f->front = 0;
    f->rear = 0;
    f->quantidade = 0;
}

void enfileirar(FilaCircular *f, int valor) {
    if (f->quantidade == TAM) {
        printf("Fila cheia!\n");
        return;
    }

    f->fila[f->rear] = valor;
    f->rear = (f->rear + 1) % TAM;
    f->quantidade++;
}

int desenfileirar(FilaCircular *f) {
    if (f->quantidade == 0) {
        printf("Fila vazia!\n");
        return -1;
    }

    int valor = f->fila[f->front];
    f->front = (f->front + 1) % TAM;
    f->quantidade--;
    return valor;
}

void imprimir(FilaCircular *f) {
    printf("Fila: ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", f->fila[i]);
    printf("| front=%d | rear=%d | qtd=%d\n", f->front, f->rear, f->quantidade);
}

int main() {
    FilaCircular f;
    inicializar(&f);

    enfileirar(&f, 10);
    enfileirar(&f, 20);
    enfileirar(&f, 30);
    imprimir(&f);

    printf("Desenfileirado: %d\n", desenfileirar(&f));
    enfileirar(&f, 40);
    imprimir(&f);

    return 0;
}
