#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int inverter_numero(int number) {
    int inverso = 0;
    while (number > 0) {
        int resto = number % 10;
        inverso = inverso * 10 + resto;
        number /= 10;
    }
    return inverso;
}

bool is_palindromo(int number) {
    int num_abs = abs(number);
    return num_abs == inverter_numero(num_abs);
}

int main(void) {
    // Representamos "teste" como string separada
    int numeros[] = {121, 242, 123, 321, 645, 111, 9999, 1000, -98, -989};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < n; i++) {
        int num = numeros[i];
        printf("%d -> %s\n", num, is_palindromo(num) ? "Palíndromo" : "Não é palíndromo");
    }

    printf("teste -> Não é palíndromo\n");
    return 0;
}
