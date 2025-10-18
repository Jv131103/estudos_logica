#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimal_to_binarie(int numero, char *resultado) {
    if (numero == 0) {
        strcpy(resultado, "");
        return;
    }

    int resto = numero % 2;
    char parcial[64];
    decimal_to_binarie(numero / 2, parcial);
    sprintf(resultado, "%s%d", parcial, resto);
}

void decimal_to_binarie2(int numero, char *resultado, int prefix) {
    if (numero == 0) {
        strcpy(resultado, prefix ? "0b0" : "0");
        return;
    }

    // função recursiva interna
    void rec(int x, char *saida) {
        if (x == 0) {
            strcpy(saida, "");
            return;
        }
        int resto = x % 2;
        char parcial[64];
        rec(x / 2, parcial);
        sprintf(saida, "%s%d", parcial, resto);
    };

    char bits[64];
    rec(abs(numero), bits);

    if (prefix)
        sprintf(resultado, "0b%s", bits);
    else
        strcpy(resultado, bits);
}

int main(void) {
    char resultado[64];

    int numero = 13;
    decimal_to_binarie(numero, resultado);
    printf("%d -> %s\n", numero, strlen(resultado) ? resultado : "0");

    numero = 10;
    decimal_to_binarie2(numero, resultado, 1);
    printf("%d -> %s\n", numero, strlen(resultado) ? resultado : "0");

    return 0;
}
