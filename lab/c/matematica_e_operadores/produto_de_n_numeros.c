#include <stdio.h>

// Versão 1 — normal
float produto_de_n_numeros(int n) {
    float produto = 1.0, numero;
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numero);
        produto *= numero;
    }
    return produto;
}

// Versão 2 — comprimida
float produto_de_n_numeros_comprimido(int n) {
    float produto = 1.0, numero;
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numero);
        produto *= numero;
    }
    return produto;
}

int main(void) {
    int n = 3;

    printf("%.2f\n", produto_de_n_numeros(n));
    printf("%.2f\n", produto_de_n_numeros_comprimido(n));

    return 0;
}
