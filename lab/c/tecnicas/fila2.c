#include <stdio.h>

#define MAX 100


typedef struct{
    int itens[MAX];
    int frente;
    int tras;
} FILA;


void inicializa(FILA *f){
    f -> frente = 0;
    f -> tras = -1;
}


int is_empty(FILA *f){
    return f -> tras < f -> frente;
}


void enqueue(FILA *f, int valor){
    if (f -> tras == MAX -1){
        printf("FILA CHEIA\n");
        return;
    }

    f -> itens[++f->tras] = valor;
}


int dequeue(FILA *f){
    if (is_empty(f)){
        printf("FILA VAZIA\n");
        return -1;
    }

    return f -> itens[f->frente++];
}


int main(){
    FILA f;

    inicializa(&f);

    enqueue(&f, 10);
    enqueue(&f, 20);
    enqueue(&f, 30);

    printf("Saiu: %d\n", dequeue(&f));
    printf("Saiu: %d\n", dequeue(&f));

    return 0;
}
