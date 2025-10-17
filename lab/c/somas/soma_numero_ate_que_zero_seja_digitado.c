#include <stdio.h>

// Versão 1 — com while(true)
float soma_numeros() {
    float soma = 0.0, numero;

    while (1) { // laço infinito
        printf("Digite um número (0 para parar): ");
        scanf("%f", &numero);
        if (numero == 0) break;
        soma += numero;
    }

    return soma;
}

// Versão 2 — comprimida
float soma_numeros_comprimido() {
    float soma = 0.0, numero;

    printf("Digite um número (0 para parar): ");
    scanf("%f", &numero);

    while (numero != 0) {
        soma += numero;
        printf("Digite um número (0 para parar): ");
        scanf("%f", &numero);
    }

    return soma;
}

int main(void) {
    printf("%.2f\n", soma_numeros());
    printf("%.2f\n", soma_numeros_comprimido());
    return 0;
}
