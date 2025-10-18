#include <stdio.h>

long long fatorial_recursivo(int n) {
    if (n == 1 || n == 0) {
        printf("%d = ", n);
        return 1;
    }
    printf("%d x ", n);
    return n * fatorial_recursivo(n - 1);
}

int main(void) {
    printf("%lld\n", fatorial_recursivo(5));
    return 0;
}
