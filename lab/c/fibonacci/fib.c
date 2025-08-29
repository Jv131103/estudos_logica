#include <stdio.h>

int fib(int n);
int fib2(int n, int seq[]);

int main() {
    int n;
    scanf("%d", &n);

    // -------------------------------
    // Versão recursiva
    // -------------------------------
    int sequencia1[n+1];
    for (int i = 0; i <= n; i++) {
        sequencia1[i] = fib(i);
    }

    printf("Recursivo -> f(%d)=%d | seq: [", n, fib(n));
    for (int i = 0; i < n; i++) {
        printf("%d, ", sequencia1[i]);
    }
    printf("%d]\n", sequencia1[n]);

    // -------------------------------
    // Versão iterativa
    // -------------------------------
    int sequencia2[n+1];
    int valor = fib2(n, sequencia2);

    printf("Iterativo -> f(%d)=%d | seq: [", n, valor);
    for (int i = 0; i < n; i++) {
        printf("%d, ", sequencia2[i]);
    }
    printf("%d]\n", sequencia2[n]);

    return 0;
}

// Recursiva
int fib(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

// Iterativa (preenche também a sequência)
int fib2(int n, int seq[]) {
    if (n == 0) {
        seq[0] = 0;
        return 0;
    } else if (n == 1) {
        seq[0] = 0;
        seq[1] = 1;
        return 1;
    }

    seq[0] = 0;
    seq[1] = 1;
    int n1 = 0, n2 = 1, temp;
    for (int i = 2; i <= n; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        seq[i] = n2;
    }
    return n2;
}
