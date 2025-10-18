#include <stdio.h>

// Função recursiva para encontrar o maior valor em um array
int maior(int lista[], int tamanho, int i) {
    if (tamanho == 0)
        return 0; // lista vazia (valor simbólico, pode adaptar)
    if (i == tamanho - 1)
        return lista[i];

    int maiorResto = maior(lista, tamanho, i + 1);
    return (lista[i] > maiorResto) ? lista[i] : maiorResto;
}

int main(void) {
    int lista1[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int lista2[] = {-10, -20, -3, -4};
    int lista3[] = {42};
    int lista4[] = {0, -1, 1};
    int lista5[] = {7, 7, 7, 7};

    int t1 = sizeof(lista1) / sizeof(lista1[0]);
    int t2 = sizeof(lista2) / sizeof(lista2[0]);
    int t3 = sizeof(lista3) / sizeof(lista3[0]);
    int t4 = sizeof(lista4) / sizeof(lista4[0]);
    int t5 = sizeof(lista5) / sizeof(lista5[0]);

    printf("%d\n", maior(lista1, t1, 0)); // 9
    printf("%d\n", maior(lista2, t2, 0)); // -3
    printf("%d\n", maior(lista3, t3, 0)); // 42
    printf("%d\n", maior(lista4, t4, 0)); // 1
    printf("%d\n", maior(lista5, t5, 0)); // 7

    return 0;
}
