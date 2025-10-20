#include <stdio.h>
#include <stdbool.h>

#define CAP 100

typedef struct {
    char data[CAP];
    int frente;   // posição do primeiro elemento
    int tras;     // posição do próximo espaço livre
} Fila;

// inicializa a fila
void init(Fila *f) {
    f->frente = 0;
    f->tras = 0;
}

// verifica se está vazia
bool is_empty(const Fila *f) {
    return f->frente == f->tras;
}

// verifica se está cheia
bool is_full(const Fila *f) {
    return (f->tras - f->frente) == CAP;
}

// insere (enqueue)
void enqueue(Fila *f, char x) {
    if (is_full(f)) {
        printf("Erro: fila cheia\n");
        return;
    }
    f->data[f->tras % CAP] = x;
    f->tras++;
}

// remove (dequeue)
char dequeue(Fila *f) {
    if (is_empty(f)) {
        printf("Erro: fila vazia\n");
        return '\0';
    }
    char val = f->data[f->frente % CAP];
    f->frente++;
    return val;
}

// mostra o conteúdo da fila
void print_fila(const Fila *f) {
    printf("Fila: [");
    for (int i = f->frente; i < f->tras; i++) {
        if (i > f->frente) printf(", ");
        printf("'%c'", f->data[i % CAP]);
    }
    printf("]\n");
}

// demonstração
int main(void) {
    Fila f;
    init(&f);

    enqueue(&f, 'A');
    enqueue(&f, 'B');
    enqueue(&f, 'C');
    print_fila(&f);   // Fila: ['A', 'B', 'C']

    printf("Saiu: '%c'\n", dequeue(&f)); // remove 'A'
    print_fila(&f);   // Fila: ['B', 'C']

    enqueue(&f, 'D');
    print_fila(&f);   // Fila: ['B', 'C', 'D']

    return 0;
}
