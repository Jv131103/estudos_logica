#include <stdio.h>

int busca_binaria_recursiva(int lista[], int valor, int inicio, int fim) {
    if (inicio > fim)
        return -1;

    int meio = (inicio + fim) / 2;

    if (lista[meio] == valor)
        return meio;
    else if (lista[meio] < valor)
        return busca_binaria_recursiva(lista, valor, meio + 1, fim);
    else
        return busca_binaria_recursiva(lista, valor, inicio, meio - 1);
}

void bubble_sort(int lista[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int lista[] = {10, 2, 8, 4, 6};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int valor = 6;

    bubble_sort(lista, tamanho); // ordenar antes da busca

    printf("Lista ordenada: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    int posicao = busca_binaria_recursiva(lista, valor, 0, tamanho - 1);
    printf("Posição: %d\n", posicao);

    return 0;
}
