#include <stdio.h>
#include <stdlib.h>


void matriz_identidade(int n);
void matriz_identidade1(int n);
void matriz_identidade2(int n);
void matriz_identidade3(int n);


int main(void){
    int n = 3;

    matriz_identidade(n);
    printf("\n");
    matriz_identidade1(n);
    printf("\n");
    matriz_identidade2(n);
    printf("\n");
    matriz_identidade3(n);
}


void matriz_identidade(int n){
    for (int linha=0; linha < n; linha++){
        for (int coluna=0; coluna < n; coluna++){
            if (linha == coluna){
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}


void matriz_identidade1(int n){
    int matriz[n][n];

    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            matriz[i][j] = i == j ? 1 : 0;
        }
    }

    // Imprime a matriz
    for (int linha=0; linha < n; linha++){
        for (int coluna=0; coluna < n; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}


void matriz_identidade2(int n) {
    int matriz[n][n]; // cria uma matriz NxN

    // preenche a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                matriz[i][j] = 1; // diagonal principal
            else
                matriz[i][j] = 0;
        }
    }

    // imprime a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void matriz_identidade3(int n){
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j ++){
            if (i == j){
                printf("1 ");
            } else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
