#include <stdio.h>
#include <string.h>

void inverter_manual(int arr[], int n, int novo[]) {
    for (int i = n - 1, j = 0; i >= 0; i--, j++) {
        novo[j] = arr[i];
    }
}

void inverter_index(int arr[], int n, int novo[]) {
    for (int i = 0; i < n; i++) {
        int idx = n - 1 - i;
        novo[i] = arr[idx];
    }
}

// versão "usando index" não faz tanto sentido em C porque não temos `indexOf` nativo
// mas poderíamos simular percorrendo a array para achar a posição

int main() {
    int lista[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int invertida[5];

    inverter_manual(lista, tamanho, invertida);

    printf("Manual: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", invertida[i]);
    }
    printf("\n");

    inverter_index(lista, tamanho, invertida);

    printf("Index: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", invertida[i]);
    }
    printf("\n");

    return 0;
}
