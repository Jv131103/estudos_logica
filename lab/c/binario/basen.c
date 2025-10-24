#include <stdio.h>
#include <math.h>

void to_base(int number, int base, char *result) {
    const char digits[] = "0123456789ABCDEF";
    char temp[65];  // suporta até 64 bits em binário
    int i = 0;

    if (number == 0) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    while (number > 0) {
        int resto = number % base;
        temp[i++] = digits[resto];
        number /= base;
    }

    // Inverte a string para obter o resultado correto
    int j = 0;
    while (i > 0) {
        result[j++] = temp[--i];
    }
    result[j] = '\0';
}

int main() {
    char resultado[65];

    to_base(25, 2, resultado);
    printf("25 em base 2 = %s\n", resultado);

    to_base(255, 16, resultado);
    printf("255 em base 16 = %s\n", resultado);

    to_base(100, 8, resultado);
    printf("100 em base 8 = %s\n", resultado);

    return 0;
}
