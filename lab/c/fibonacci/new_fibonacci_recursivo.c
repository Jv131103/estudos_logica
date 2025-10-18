#include <stdio.h>

int fibonacci_recursivo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}

int main(void) {
    printf("%d\n", fibonacci_recursivo(6)); // 8
    return 0;
}
