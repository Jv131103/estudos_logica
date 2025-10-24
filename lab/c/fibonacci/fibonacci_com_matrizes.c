#include <stdio.h>

// Multiplica duas matrizes 2x2
void multiplica(long long a[2][2], long long b[2][2]) {
    long long x = a[0][0]*b[0][0] + a[0][1]*b[1][0];
    long long y = a[0][0]*b[0][1] + a[0][1]*b[1][1];
    long long z = a[1][0]*b[0][0] + a[1][1]*b[1][0];
    long long w = a[1][0]*b[0][1] + a[1][1]*b[1][1];

    a[0][0] = x;
    a[0][1] = y;
    a[1][0] = z;
    a[1][1] = w;
}

// Eleva matriz 2x2 à potência n (exponenciação rápida)
void potencia(long long a[2][2], int n) {
    if (n <= 1) return;
    long long b[2][2] = {{1, 1}, {1, 0}};

    potencia(a, n / 2);
    multiplica(a, a);

    if (n % 2 != 0)
        multiplica(a, b);
}

// Retorna o n-ésimo Fibonacci
long long fib(int n) {
    if (n == 0) return 0;
    long long a[2][2] = {{1, 1}, {1, 0}};
    potencia(a, n - 1);
    return a[0][0];
}

int main() {
    int n = 10;
    printf("%lld\n", fib(n));  // Saída: 55
    return 0;
}
