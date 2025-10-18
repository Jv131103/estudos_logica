#include <stdio.h>


void soma_matrizes(int linhas, int colunas, int matriz1[linhas][colunas], int matriz2[linhas][colunas]){
    int nova_matriz[linhas][colunas];

    for (int i=0; i < linhas; i++){
        for (int j=0; j < colunas; j++){
            nova_matriz[i][j] = matriz1[i][j] + matriz2[i][j]; 
        }
    }

    // impressão bonitinha
    printf("[");
    for (int i = 0; i < linhas; i++) {
        printf("[");
        for (int j = 0; j < colunas; j++) {
            printf("%d", nova_matriz[i][j]);
            if (j < colunas - 1) printf(", ");
        }
        printf("]");
        if (i < linhas - 1) printf(", ");
    }
    printf("]\n");
}

void soma_matrizes1(int linhas, int colunas, int matriz1[linhas][colunas], int matriz2[linhas][colunas]){
    for (int i=0; i < linhas; i++){
        for (int j=0; j < colunas; j++){
            matriz1[i][j] = matriz1[i][j] + matriz2[i][j]; 
        }
    }

    // impressão bonitinha
    printf("[");
    for (int i = 0; i < linhas; i++) {
        printf("[");
        for (int j = 0; j < colunas; j++) {
            printf("%d", matriz1[i][j]);
            if (j < colunas - 1) printf(", ");
        }
        printf("]");
        if (i < linhas - 1) printf(", ");
    }
    printf("]\n");
}


int main() {
    int m1[2][2] = {{1, 2}, {3, 4}};
    int m2[2][2] = {{5, 6}, {7, 8}};

    soma_matrizes(2, 2, m1, m2);
    soma_matrizes1(2, 2, m1, m2);

    return 0;
}
