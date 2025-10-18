#include <stdio.h>
#include <stdlib.h>

int* inverter1(int *lista, int n) {
    if (n == 0 || lista == NULL) return NULL;
    int *reverso = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        reverso[i] = lista[n - 1 - i];
    }
    return reverso;
}

int* inverter2(int *lista, int n) {
    if (n == 0 || lista == NULL) return NULL;
    int *reverso = malloc(n * sizeof(int));
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        reverso[j++] = lista[i];
    }
    return reverso;
}

void inverter3(int *lista, int n) {
    if (n == 0 || lista == NULL) return;
    for (int i = 0; i < n / 2; i++) {
        int temp = lista[i];
        lista[i] = lista[n - 1 - i];
        lista[n - 1 - i] = temp;
    }
}

int* inverter4(int *lista, int n) {
    if (n == 0 || lista == NULL) return NULL;
    int *reverso = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        reverso[i] = lista[n - 1 - i];
    }
    return reverso;
}

void print_array(int *arr, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main(void) {
    int lista[] = {1, 2, 3, 4};
    int n = sizeof(lista) / sizeof(lista[0]);

    int *r1 = inverter1(lista, n);
    int *r2 = inverter2(lista, n);
    int *r4 = inverter4(lista, n);

    printf("inverter1: "); print_array(r1, n);
    printf("inverter2: "); print_array(r2, n);

    int lista3[] = {1, 2, 3, 4};
    inverter3(lista3, n);
    printf("inverter3: "); print_array(lista3, n);

    printf("inverter4: "); print_array(r4, n);

    free(r1);
    free(r2);
    free(r4);
    return 0;
}
