#include <stdio.h>

void gerar_aleatorios(int N, int A, int B, unsigned int semente) {
    unsigned long a = 1664525;
    unsigned long c = 1013904223;
    unsigned long m = 1UL << 32;  // 2^32

    unsigned long x = semente;

    for (int i = 0; i < N; i++) {
        // Fórmula principal
        x = (a * x + c) % m;

        // Ajuste para o intervalo [A, B]
        int valor = A + (x % (B - A + 1));

        printf("%d ", valor);
    }
    printf("\n");
}

int main() {
    gerar_aleatorios(5, 1, 10, 7);
    return 0;
}
