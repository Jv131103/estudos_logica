#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int inverter_numeros1(int numero) {
    bool negativo = numero < 0;
    if (negativo) numero = -numero;

    char str[50];
    sprintf(str, "%d", numero);

    // Inverte a string manualmente
    int len = 0;
    while (str[len] != '\0') len++;

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    int inverso = atoi(str);
    return negativo ? -inverso : inverso;
}

int inverter_numeros2(int numero) {
    bool negativo = numero < 0;
    if (negativo) numero = -numero;

    int inverso = 0;
    while (numero > 0) {
        int resto = numero % 10;
        inverso = inverso * 10 + resto;
        numero /= 10;
    }

    return negativo ? -inverso : inverso;
}

int main(void) {
    printf("%d\n", inverter_numeros1(1234));
    printf("%d\n", inverter_numeros2(1234));
    printf("\n");
    printf("%d\n", inverter_numeros1(-1234));
    printf("%d\n", inverter_numeros2(-1234));
    printf("\n");
    printf("%d\n", inverter_numeros1(0));
    printf("%d\n", inverter_numeros2(0));
    printf("\n");
    printf("%d\n", inverter_numeros1(1000));
    printf("%d\n", inverter_numeros2(1000));

    return 0;
}
