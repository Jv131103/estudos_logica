#include <stdio.h>
#include <stdlib.h>  // abs()
#include <string.h>  // sprintf()


int soma_digitos_linear(int n) {
    n = abs(n);
    int soma = 0;

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }

    return soma;
}


int soma_digitos_string(int n) {
    n = abs(n);
    char buffer[50];
    sprintf(buffer, "%d", n);

    int soma = 0;
    for (int i = 0; i < strlen(buffer); i++) {
        soma += buffer[i] - '0';  // converte caractere para inteiro
    }

    return soma;
}


int main() {
    printf("%d\n", soma_digitos_linear(1234));  // 10
    printf("%d\n", soma_digitos_linear(-567));  // 18

    printf("%d\n", soma_digitos_string(1234));  // 10
    printf("%d\n", soma_digitos_string(-567));  // 18
    return 0;
}
