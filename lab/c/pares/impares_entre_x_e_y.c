#include <stdio.h>
#include <stdlib.h>

// Função 1 — versão "normal"
void impares_entre_x_e_y(int x, int y) {
    if (x > y) {
        printf("X deve ser menor ou igual a Y\n");
        return;
    }

    if (x < 0 || y < 0) {
        printf("X e Y devem ser maiores ou iguais a 0\n");
        return;
    }

    int tem_impar = 0; // flag para saber se há ímpares

    for (int i = x; i <= y; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            tem_impar = 1;
        }
    }

    if (!tem_impar) {
        printf("Nenhum número ímpar encontrado");
    }

    printf("\n");
}

// Função 2 — versão "comprimida"
void impares_entre_x_e_y_comprimido(int x, int y) {
    if (x > y) {
        printf("X deve ser menor ou igual a Y\n");
        return;
    }

    if (x < 0 || y < 0) {
        printf("X e Y devem ser maiores ou iguais a 0\n");
        return;
    }

    int tem_impar = 0;
    for (int i = x; i <= y; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            tem_impar = 1;
        }
    }

    if (!tem_impar) {
        printf("Nenhum número ímpar encontrado");
    }

    printf("\n");
}

// Função principal — equivalente ao seu print()
int main(void) {
    impares_entre_x_e_y(3, 9);
    impares_entre_x_e_y(4, 10);
    impares_entre_x_e_y(1, 5);
    impares_entre_x_e_y(4, 4);
    impares_entre_x_e_y(3, 11);

    printf("\n");

    impares_entre_x_e_y_comprimido(3, 9);
    impares_entre_x_e_y_comprimido(4, 10);
    impares_entre_x_e_y_comprimido(1, 5);
    impares_entre_x_e_y_comprimido(4, 4);
    impares_entre_x_e_y_comprimido(3, 11);

    return 0;
}
