#include <stdio.h>

#define N 2  // número de linhas
#define M 2  // número de colunas

void soma_matrizes(int m1[N][M], int m2[N][M], int m3[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void soma_matrizes_inplace(int m1[N][M], int m2[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            m1[i][j] += m2[i][j];
        }
    }
}

int main() {
    int M1[N][M] = {{1, 2}, {3, 4}};
    int M2[N][M] = {{5, 6}, {7, 8}};
    int M3[N][M];

    soma_matrizes(M1, M2, M3);

    printf("M3 = \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", M3[i][j]);
        }
        printf("\n");
    }

    soma_matrizes_inplace(M1, M2);
    printf("\nM1 atualizado in-place = \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
