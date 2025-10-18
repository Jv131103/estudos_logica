#include <stdio.h>
#include <stdlib.h>

int soma_digitos(int numero) {
    numero = abs(numero);
    int soma = 0;

    while (numero > 0) {
        int resto = numero % 10;
        soma += resto;
        numero /= 10;
    }

    return soma;
}

int main(void) {
    int testes[] = {432, 12345, 0, 908, -32, -1, 1000};
    int n = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < n; i++) {
        printf("%d\n", soma_digitos(testes[i]));
    }

    return 0;
}
