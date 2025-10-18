#include <stdio.h>

long long potencia_recursiva(long long base, int expoente) {
    if (expoente == 0)
        return 1;
    if (base == 0)
        return 0;
    return base * potencia_recursiva(base, expoente - 1);
}

long long potencia_rapida(long long base, int expoente) {
    if (expoente == 0)
        return 1;
    if (expoente == 1)
        return base;

    if (expoente % 2 == 0) {
        long long metade = potencia_rapida(base, expoente / 2);
        return metade * metade;
    } else {
        return base * potencia_rapida(base, expoente - 1);
    }
}

int main(void) {
    printf("%lld\n", potencia_rapida(2, 10));  // 1024
    printf("%lld\n", potencia_rapida(3, 7));   // 2187
    printf("%lld\n", potencia_rapida(5, 0));   // 1
    printf("%lld\n", potencia_rapida(7, 1));   // 7
    printf("\n");
    printf("%lld\n", potencia_recursiva(2, 3)); // 8
    printf("%lld\n", potencia_recursiva(5, 0)); // 1
    printf("%lld\n", potencia_recursiva(0, 5)); // 0
    printf("%lld\n", potencia_recursiva(2, 4)); // 16
    return 0;
}
