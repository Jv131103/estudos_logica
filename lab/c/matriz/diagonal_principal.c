#include <stdio.h>


int diagonal_principal(int tam, int matriz[tam][tam]);

int main(){
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int tamanho_mat1 = sizeof(mat1) / sizeof(mat1[0]);
    int tamanho_mat2 = sizeof(mat2) / sizeof(mat2[0]);

    printf("%d\n", diagonal_principal(tamanho_mat1, mat1));
    printf("%d\n", diagonal_principal(tamanho_mat2, mat2));
}

int diagonal_principal(int tam, int matriz[tam][tam]){
    int soma = 0;

    for (int i=0; i < tam; i++){
        for (int j=0; j < tam; j++){
            if (i == j){
                soma += matriz[i][j];
            }
        }
    }

    return soma;
}
