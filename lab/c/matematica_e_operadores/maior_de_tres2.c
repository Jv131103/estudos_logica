#include <stdio.h>

// Função 1 — normal
float maior_de_tres_normal(float a, float b, float c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

// Função 2 — com swap
float maior_de_tres_com_swap(float a, float b, float c) {
    float temp;
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    return a;
}

// Função 3 — interativa (array)
float maior_interativo(float numeros[], int qtd) {
    if (qtd == 0) return 0; // retorna 0 se lista vazia
    float maior = numeros[0];
    for (int i = 1; i < qtd; i++) {
        if (numeros[i] > maior)
            maior = numeros[i];
    }
    return maior;
}

// Testes
int main(void) {
    float conjuntos[][3] = {
        {3, 5, 2},
        {10, 7, 8},
        {1, 1, 1},
        {-1, -5, -3},
        {0, 0, 0},
        {2.5, 2.5, 3.5}
    };
    int qtd_conjuntos = sizeof(conjuntos) / sizeof(conjuntos[0]);

    for (int i = 0; i < qtd_conjuntos; i++) {
        float a = conjuntos[i][0];
        float b = conjuntos[i][1];
        float c = conjuntos[i][2];
        float normal = maior_de_tres_normal(a, b, c);
        float swap = maior_de_tres_com_swap(a, b, c);
        printf("Maior entre %.2f, %.2f, %.2f é %.2f\n", a, b, c, normal);
    }

    printf("\n");

    float listas[][5] = {
        {3, 5, 2, 8, 1},
        {10, 7, 8, 12, 6},
        {1, 1, 1, 1, 0},      // último é lixo só pra preencher
        {-1, -5, -3, -2, 0},
        {0, 0, 0, 0, 0},
        {2.5, 2.5, 3.5, 4.0, 0}
    };
    int tamanhos[] = {5, 5, 4, 4, 4, 4};

    int qtd_listas = sizeof(tamanhos) / sizeof(tamanhos[0]);
    for (int i = 0; i < qtd_listas; i++) {
        float maior = maior_interativo(listas[i], tamanhos[i]);
        printf("Maior entre lista %d é %.2f\n", i + 1, maior);
    }

    return 0;
}
