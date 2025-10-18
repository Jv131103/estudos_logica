#include <stdio.h>

int find_middle(int lista[], int tamanho) {
    return (tamanho - 1) / 2;
}

int main(void) {
    int lista[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    int middle = find_middle(lista, tamanho);

    printf("Índice do meio: %d\n", middle);
    printf("Elemento do meio: %d\n", lista[middle]);

    return 0;
}
