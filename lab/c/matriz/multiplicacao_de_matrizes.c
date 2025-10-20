#include <stdio.h>

#define N 2 // tamanho das matrizes quadradas

void multiplicacao_de_matrizes(int mat1[N][N], int mat2[N][N], int resultado[N][N]) {
    // percorre cada linha de mat1
    for (int i = 0; i < N; i++) {
        // percorre cada coluna de mat2
        for (int j = 0; j < N; j++) {
            resultado[i][j] = 0; // inicializa posição
            // faz o somatório da multiplicação
            for (int k = 0; k < N; k++) {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[N][N] = {{1, 2}, {3, 4}};
    int mat2[N][N] = {{5, 6}, {7, 8}};
    int resultado[N][N];

    multiplicacao_de_matrizes(mat1, mat2, resultado);

    printf("Matriz resultado:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
