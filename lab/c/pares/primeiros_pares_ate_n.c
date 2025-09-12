#include <stdio.h>

int main() {
    int limite = 10;
    int tamanho = limite / 2;   // quantidade de pares até o limite
    int pares[tamanho];
    int index = 0;

    for (int i = 2; i <= limite; i += 2) {
        pares[index++] = i;
    }

    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", pares[i]);
        if (i < tamanho - 1) printf(", ");
    }
    printf(" ]\n");

    return 0;
}
