#include <stdio.h>


const char *matriz_simetrica(int tam, int matriz[tam][tam]);

int main(){
    int A[2][2] = {{1, 2}, {2, 1}};
    printf("%s\n", matriz_simetrica(2, A));
    int B[2][2] = {{1, 3}, {2, 1}};
    printf("%s\n", matriz_simetrica(2, B));
    int C[3][3] = {{1, 5, 7}, {5, 2, 3}, {7, 3, 9}};
    printf("%s\n", matriz_simetrica(3, C));

    return 0;
}

const char *matriz_simetrica(int tam, int matriz[tam][tam]){
    for (int linha=0; linha < tam; linha++){
        for (int coluna=0; coluna < tam; coluna++){
            if (matriz[linha][coluna] != matriz[coluna][linha]){
                return "Não Simétrica";
            }
        }
    }
    return "Simétrica";
}
