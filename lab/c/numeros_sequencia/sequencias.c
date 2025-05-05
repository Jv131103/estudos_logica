#include <stdio.h>

void pares_ordenados(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            printf("(%d, %d)\n", lista[i], lista[j]);
        }
    }
}

int main() {
    int lista[] = {1, 2, 3, 4};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    pares_ordenados(lista, tamanho);

    return 0;
}
