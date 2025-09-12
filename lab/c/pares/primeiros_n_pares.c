#include <stdio.h>

int main() {
    int n = 10;
    int pares[n];

    for (int i = 1; i <= n; i++) {
        pares[i - 1] = 2 * i;
    }

    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", pares[i]);
    }
    printf("]\n");

    return 0;
}
