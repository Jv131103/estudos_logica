#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const char* par_impar_divisivel3(const char* entrada) {
    char* endptr;
    long numero = strtol(entrada, &endptr, 10);

    if (*endptr != '\0') {
        return "Entrada inválida";
    }

    if (numero % 2 == 0) {
        return "Par";
    } else if (numero % 3 == 0) {
        return "Ímpar e divisível por 3";
    } else {
        return "Ímpar";
    }
}

int main() {
    const char* numeros[] = {"2", "9", "5", "Ola"};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("%s -> %s\n", numeros[i], par_impar_divisivel3(numeros[i]));
    }

    return 0;
}
