#include <stdio.h>
#include <stdlib.h>

void maior_e_menor1(int n, int valores[]) {
    int maior = valores[0], menor = valores[0];
    for (int i = 1; i < n; i++) {
        if (valores[i] > maior) maior = valores[i];
        if (valores[i] < menor) menor = valores[i];
    }
    printf("Maior = %d\nMenor = %d\n", maior, menor);
}

void maior_e_menor2(int *valores, int n) {
    if (valores == NULL) {
        printf("Tipo de dado inválido!\n");
    } else if (n == 0) {
        printf("Vazio!\n");
    } else {
        int maior = valores[0], menor = valores[0];
        for (int i = 1; i < n; i++) {
            if (valores[i] > maior) maior = valores[i];
            if (valores[i] < menor) menor = valores[i];
        }
        printf("Maior = %d\nMenor = %d\n", maior, menor);
    }
}

void maior_e_menor3(int *valores, int n) {
    if (valores == NULL) {
        printf("Tipo de dado inválido!\n");
    } else if (n == 0) {
        printf("Vazio!\n");
    } else {
        int maior = valores[0];
        int menor = valores[0];
        for (int i = 0; i < n; i++) {
            if (valores[i] > maior) maior = valores[i];
            else if (valores[i] < menor) menor = valores[i];
        }
        printf("Maior = %d\nMenor = %d\n", maior, menor);
    }
}

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void maior_e_menor4(int *valores, int n) {
    if (valores == NULL) {
        printf("Tipo de dado inválido!\n");
    } else if (n == 0) {
        printf("Vazio!\n");
    } else {
        int *ordenada = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) ordenada[i] = valores[i];

        qsort(ordenada, n, sizeof(int), comparar);
        printf("Maior = %d\nMenor = %d\n", ordenada[n - 1], ordenada[0]);

        free(ordenada);
    }
}

int main(void) {
    int valores[] = {3, 8, 1, 9, 2};
    int n = sizeof(valores) / sizeof(valores[0]);

    maior_e_menor1(n, valores);
    printf("\n");
    maior_e_menor2(valores, n);
    printf("\n");
    maior_e_menor3(valores, n);
    printf("\n");
    maior_e_menor4(valores, n);

    return 0;
}
