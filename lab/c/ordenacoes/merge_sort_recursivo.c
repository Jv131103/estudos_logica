#include <stdio.h>
#include <stdlib.h>

// Função para intercalar duas metades já ordenadas
void merge(int arr[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    // Cria vetores temporários
    int *esq = malloc(n1 * sizeof(int));
    int *dir = malloc(n2 * sizeof(int));

    // Copia os dados
    for (int i = 0; i < n1; i++) esq[i] = arr[inicio + i];
    for (int j = 0; j < n2; j++) dir[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    // Junta as metades
    while (i < n1 && j < n2) {
        if (esq[i] <= dir[j]) {
            arr[k++] = esq[i++];
        } else {
            arr[k++] = dir[j++];
        }
    }

    // Copia o restante
    while (i < n1) arr[k++] = esq[i++];
    while (j < n2) arr[k++] = dir[j++];

    free(esq);
    free(dir);
}

// Função recursiva Merge Sort
void merge_sort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        merge_sort(arr, inicio, meio);
        merge_sort(arr, meio + 1, fim);

        merge(arr, inicio, meio, fim);
    }
}

// Função auxiliar para imprimir o vetor
void print_array(int arr[], int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", arr[i]);
        if (i < tamanho - 1) printf(", ");
    }
    printf("]\n");
}

// ---- Teste principal ----
int main(void) {
    int arr1[] = {8, 3, 5, 2};
    int arr2[] = {9, 1, 7, 3, 6, 2};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    merge_sort(arr1, 0, n1 - 1);
    merge_sort(arr2, 0, n2 - 1);

    print_array(arr1, n1);  // [2, 3, 5, 8]
    print_array(arr2, n2);  // [1, 2, 3, 6, 7, 9]

    return 0;
}
