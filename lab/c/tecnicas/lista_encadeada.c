#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* proximo;
} No;

No* criarNo(int valor) {
    No* novo = (No*) malloc(sizeof(No)); // aloca memória para o novo nó
    novo->valor = valor;
    novo->proximo = NULL; // o último nó sempre aponta para NULL
    return novo;
}

void imprimirLista(No* head) {
    No* atual = head;
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int main() {
    No* head = criarNo(10);
    head->proximo = criarNo(20);
    head->proximo->proximo = criarNo(30);

    imprimirLista(head);

    return 0;
}
