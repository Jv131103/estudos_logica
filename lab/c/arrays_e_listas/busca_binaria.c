#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int compara(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int busca_binaria(int lista[], int tamanho, int valor) {
    // Ordena a lista antes da busca (como no Python)
    qsort(lista, tamanho, sizeof(int), compara);

    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (lista[meio] == valor) {
            return meio;
        } else if (valor < lista[meio]) {
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return -1; // não encontrado
}

void print_array(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

int main(void) {
    int lista[] = {10, 2, 8, 4, 6};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int valor = 6;

    int posicao = busca_binaria(lista, tamanho, valor);

    printf("Lista ordenada: ");
    print_array(lista, tamanho);
    printf("Posição: %d\n", posicao);

    return 0;
}
