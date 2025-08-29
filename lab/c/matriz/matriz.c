#include <stdio.h>

int main(){
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    // lê a matriz
    int matriz[linhas][colunas]; // VLA - variável length array (C99)

    // leitura da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // imprime transposta
    for (int j = 0; j < colunas; j++) {
        for (int i = 0; i < linhas; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
