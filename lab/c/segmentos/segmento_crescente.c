#include <stdio.h>

int contar_segmentos_ordem_crescente(int numeros[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }

    int maximo = 1;
    int atual = 1;
    int anterior = numeros[0];

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > anterior) {
            atual++;
        } else {
            if (atual > maximo) {
                maximo = atual;
            }
            atual = 1;
        }
        anterior = numeros[i];
    }

    if (atual > maximo) {
        maximo = atual;
    }

    return maximo;
}

int main() {
    int a[] = {5, 10, 3, 2, 4, 7, 9, 8, 5};
    int b[] = {10, 8, 7, 5, 2};
    int c[] = {1, 2, 3, 4, 5};
    int d[] = {2, 2, 3, 4, 5};

    printf("%d\n", contar_segmentos_ordem_crescente(a, sizeof(a)/sizeof(a[0])));
    printf("%d\n", contar_segmentos_ordem_crescente(b, sizeof(b)/sizeof(b[0])));
    printf("%d\n", contar_segmentos_ordem_crescente(c, sizeof(c)/sizeof(c[0])));
    printf("%d\n", contar_segmentos_ordem_crescente(d, sizeof(d)/sizeof(d[0])));

    return 0;
}
