#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

double potencia1(double base, int expoente) {
    // Caso especial: 0^0 é indefinido
    if (base == 0 && expoente == 0) {
        printf("Indefinido (0^0)\n");
        return NAN;  // retorna NaN (not a number)
    }

    // Expoente zero
    if (expoente == 0) {
        return 1;
    }

    double resultado = 1;
    int exp = abs(expoente);

    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }

    if (expoente < 0) {
        return 1 / resultado;
    }

    return resultado;
}

double potencia2(double base, int expoente) {
    return pow(base, expoente);
}

int main(void) {
    printf("%.3f\n", potencia1(2, 5));   // 32
    printf("%.3f\n", potencia1(-2, 3));  // -8
    printf("%.3f\n", potencia1(-2, 2));  // 4
    printf("%.3f\n", potencia1(2, -3));  // 0.125
    printf("%.3f\n", potencia1(5, 0));   // 1
    potencia1(0, 0);                     // indefinido
    printf("%.3f\n", potencia1(0, 3));   // 0
    printf("\n");
    printf("%.3f\n", potencia2(2, 5));   // 32
    printf("%.3f\n", potencia2(-2, 3));  // -8
    printf("%.3f\n", potencia2(-2, 2));  // 4
    printf("%.3f\n", potencia2(2, -3));  // 0.125
    printf("%.3f\n", potencia2(5, 0));   // 1
    printf("%.3f\n", potencia2(0, 0));   // 1
    printf("%.3f\n", potencia2(0, 3));   // 0

    return 0;
}
