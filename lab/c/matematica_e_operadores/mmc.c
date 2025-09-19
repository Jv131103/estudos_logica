#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0) {
        printf("Erro: MDC indefinido para (0,0)\n");
        exit(1);
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return abs(a * b) / mdc(a, b);
}

int main() {
    printf("%d\n", mmc(12, 18)); // 36
    return 0;
}
