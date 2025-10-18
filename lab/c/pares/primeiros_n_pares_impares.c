#include <stdio.h>
#include <stdlib.h>

void primeiros_impares(int n) {
    int cont = 1;
    int impares = 1;

    printf("Ímpares: ");
    while (cont <= n) {
        printf("%d", impares);
        if (cont < n) printf(" ");
        impares += 2;
        cont++;
    }
    printf("\n");
}

void primeiros_pares(int n) {
    int cont = 1;
    int pares = 2;

    printf("Pares: ");
    while (cont <= n) {
        printf("%d", pares);
        if (cont < n) printf(" ");
        pares += 2;
        cont++;
    }
    printf("\n");
}

void primeiros(int n) {
    if (n == 0) {
        printf("n deve ser diferente de 0\n");
        return;
    }

    n = abs(n);

    primeiros_pares(n);
    primeiros_impares(n);
}

int main(void) {
    primeiros(4);
    return 0;
}
