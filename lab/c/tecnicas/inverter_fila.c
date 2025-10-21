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
    f->valor_removido = -1; // flag inicial
}

int isEmpty(Fila *f) {
    return f->inicio == f->fim;
}

// compacta quando houver espaço no começo e fim encostar no MAX
static void compacta(Fila *f) {
    if (f->inicio > 0) {
        int n = f->fim - f->inicio;
        for (int i = 0; i < n; i++) {
            f->fila[i] = f->fila[f->inicio + i];
        }
        f->inicio = 0;
        f->fim = n;
    }
}

void enqueue(Fila *f, int valor) {
    if (f->fim == MAX) {
        // tenta compactar para abrir espaço
        compacta(f);
        if (f->fim == MAX) {
            printf("Erro: fila cheia\n");
            return;
        }
    }
    f->fila[f->fim++] = valor;
}

int dequeue(Fila *f) {
    if (isEmpty(f)) {
        printf("Erro: fila vazia\n");
        return -1;
    }
    f->valor_removido = f->fila[f->inicio++];
    // opcional: compactar quando muitos itens foram removidos
    if (f->inicio > 50) { // heurística simples
        compacta(f);
    }
    return f->valor_removido;
}

void viewFila(Fila *f) {
    printf("Fila: ");
    for (int i = f->inicio; i < f->fim; i++) {
        printf("%d ", f->fila[i]);
    }
    if (!isEmpty(f)) {
        printf("\nPróximo a sair: %d", f->fila[f->inicio]);
    } else {
        printf("\nPróximo a sair: NULL");
    }
    printf("\nÚltimo removido: %d\n", f->valor_removido);
}

void reverse(Fila *f) {
    if (isEmpty(f)) {
        printf("Erro: fila vazia\n");
        return;
    }
    int i = f->inicio;
    int j = f->fim - 1;
    while (i < j) {
        int tmp = f->fila[i];
        f->fila[i] = f->fila[j];
        f->fila[j] = tmp;
        i++;
        j--;
    }
}

int main() {
    Fila f;
    initFila(&f);
    enqueue(&f, 1);
    enqueue(&f, 2);
    enqueue(&f, 3);
    enqueue(&f, 4);

    viewFila(&f);

    reverse(&f);
    printf("\nDepois de inverter:\n");
    viewFila(&f);

    // Teste de dequeue
    dequeue(&f);
    dequeue(&f);
    printf("\nDepois de dois dequeues:\n");
    viewFila(&f);

    // Enfileira mais para exercitar compactação
    for (int i = 5; i <= 12; i++) enqueue(&f, i);
    printf("\nApós novas inserções:\n");
    viewFila(&f);

    return 0;
}
