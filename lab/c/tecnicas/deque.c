#include <stdio.h>
#define MAX 100

typedef struct {
    int dados[MAX];
    int ini;
    int fim;
    int tamanho;
} Deque;

void init(Deque *d) {
    d->ini = 0;
    d->fim = -1;
    d->tamanho = 0;
}

void push_front(Deque *d, int valor) {
    if (d->tamanho == MAX) {
        printf("Deque cheio!\n");
        return;
    }
    d->ini = (d->ini - 1 + MAX) % MAX;
    d->dados[d->ini] = valor;
    d->tamanho++;
}

void push_back(Deque *d, int valor) {
    if (d->tamanho == MAX) {
        printf("Deque cheio!\n");
        return;
    }
    d->fim = (d->fim + 1) % MAX;
    d->dados[d->fim] = valor;
    d->tamanho++;
}

int pop_front(Deque *d) {
    if (d->tamanho == 0) {
        printf("Deque vazio!\n");
        return -1;
    }
    int valor = d->dados[d->ini];
    d->ini = (d->ini + 1) % MAX;
    d->tamanho--;
    return valor;
}

int pop_back(Deque *d) {
    if (d->tamanho == 0) {
        printf("Deque vazio!\n");
        return -1;
    }
    int valor = d->dados[d->fim];
    d->fim = (d->fim - 1 + MAX) % MAX;
    d->tamanho--;
    return valor;
}

void print_deque(Deque *d) {
    printf("Deque final: [");
    for (int i = 0; i < d->tamanho; i++) {
        int idx = (d->ini + i) % MAX;
        printf("%d", d->dados[idx]);
        if (i < d->tamanho - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    Deque d;
    init(&d);

    push_front(&d, 1);
    push_back(&d, 2);
    pop_front(&d);
    print_deque(&d);

    return 0;
}
