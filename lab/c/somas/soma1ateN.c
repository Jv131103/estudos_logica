#include <stdio.h>


int soma_ate_N(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n = 5;
    printf("%d\n", soma_ate_N(n));
    return 0;
}
