#include <stdio.h>
#include <stdlib.h>

static void merge(int *arr, int left, int mid, int right, int *tmp) {
    int i = left;     // início do bloco esquerdo
    int j = mid;      // início do bloco direito
    int k = left;     // índice no temp

    while (i < mid && j < right) {
        if (arr[i] < arr[j]) tmp[k++] = arr[i++];
        else                  tmp[k++] = arr[j++];
    }
    while (i < mid)   tmp[k++] = arr[i++];
    while (j < right) tmp[k++] = arr[j++];

    // copia de volta para o array original
    for (int t = left; t < right; t++) arr[t] = tmp[t];
}

void merge_sort_iterativo(int *arr, int n) {
    int *tmp = (int *)malloc(n * sizeof(int));
    if (!tmp) return;

    for (int tamanho = 1; tamanho < n; tamanho *= 2) {
        for (int left = 0; left < n; left += 2 * tamanho) {
            int mid   = left + tamanho;
            int right = left + 2 * tamanho;
            if (mid > n) mid = n;
            if (right > n) right = n;
            // somente mescla se existir bloco direito
            if (mid < right) merge(arr, left, mid, right, tmp);
        }
    }

    free(tmp);
}

static void print_array(const int *a, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main(void) {
    int valores[] = {8, 3, 5, 2, 9, 1};
    int n = sizeof(valores) / sizeof(valores[0]);

    printf("Antes: ");
    print_array(valores, n);

    merge_sort_iterativo(valores, n);

    printf("Depois: ");
    print_array(valores, n);

    return 0;
}
