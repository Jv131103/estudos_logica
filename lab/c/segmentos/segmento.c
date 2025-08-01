#include <stdio.h>

int contar_segmentos(int numeros[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }

    int segmentos = 1;
    int anterior = numeros[0];

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] != anterior) {
            segmentos++;
            anterior = numeros[i];
        }
    }

    return segmentos;
}

int main() {
    int vetor1[] = {5, 2, 2, 3, 4, 4, 4, 4, 1, 1};
    int vetor2[] = {2, 2, 2, 3, 4, 4, 4, 4, 1, 1};

    int tamanho1 = sizeof(vetor1) / sizeof(vetor1[0]);
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);

    printf("%d\n", contar_segmentos(vetor1, tamanho1)); // 5
    printf("%d\n", contar_segmentos(vetor2, tamanho2)); // 4

    return 0;
}
