#include <stdio.h>

void n_pares_bit(int n) {
    for (int i = 1; i <= n; i++) {
        if ((i & 1) == 0) {   // testa o último bit (par se 0)
            printf("%d é PAR\n", i);
        } else {
            printf("%d é ÍMPAR\n", i);
        }
    }
}

void n_pares_other_calc(int n) {
    for (int x = 1; x <= n; x++) {
        if ((x / 2) * 2 == x) {   // divisão inteira em C já é truncada
            printf("%d é PAR\n", x);
        } else {
            printf("%d é ÍMPAR\n", x);
        }
    }
}

int main() {
    n_pares_bit(5);
    printf("\n");
    n_pares_other_calc(5);
    return 0;
}
