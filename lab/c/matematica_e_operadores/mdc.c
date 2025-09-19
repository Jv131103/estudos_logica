#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0) {
        printf("Erro: MDC indefinido para (0,0)\n");
        exit(1); // encerra o programa
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    printf("%d\n", mdc(105, 50));  // 5
    return 0;
}
