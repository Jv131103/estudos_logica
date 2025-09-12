#include <stdio.h>

void n_primeiros_fibonacci(int n) {
    if (n == 0) {
        printf("[]\n");
        return;
    } else if (n == 1) {
        printf("[0]\n");
        return;
    }

    int n1 = 0, n2 = 1;

    printf("[ %d, %d", n1, n2);

    for (int i = 2; i < n; i++) {
        int prox = n1 + n2;
        printf(", %d", prox);
        n1 = n2;
        n2 = prox;
    }

    printf(" ]\n");
}

int main() {
    int testes[] = {1, 2, 5, 10};
    int qtd = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < qtd; i++) {
        n_primeiros_fibonacci(testes[i]);
    }

    return 0;
}
