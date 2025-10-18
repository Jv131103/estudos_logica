#include <stdio.h>

int busca_linear1(int lista[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == valor)
            return i;
    }
    return -1;
}

int busca_linear2(int lista[], int tamanho, int valor) {
    int i = 0;
    while (i < tamanho) {
        if (lista[i] == valor)
            return i;
        i++;
    }
    return -1;
}

int main(void) {
    int lista[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int valor = 6;

    printf("Posição: %d\n", busca_linear1(lista, tamanho, valor));
    printf("Posição: %d\n", busca_linear2(lista, tamanho, valor));

    return 0;
}
