#include <stdio.h>

void somar_listas(int l1[], int l2[], int l3[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        l3[i] = l1[i] + l2[i];
    }
}

int main() {
    int l1[] = {1, 2, 3, 4};
    int l2[] = {10, 20, 30, 40};
    int tamanho = 4;
    int l3[4];

    somar_listas(l1, l2, l3, tamanho);

    printf("Resultado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", l3[i]);
    }
    printf("\n");

    return 0;
}
