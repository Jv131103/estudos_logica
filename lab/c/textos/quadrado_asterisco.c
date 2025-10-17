#include <stdio.h>

// Versão 1 — simples
void quadrado_asteriscos(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Versão 2 — longa
void quadrado_asterisco_longo(int n) {
    for (int i = 0; i < n; i++) {
        char linha[100]; // limite de 100 colunas (poderia usar malloc)
        int k = 0;
        for (int j = 0; j < n; j++) {
            linha[k++] = '*';
        }
        linha[k] = '\0'; // finaliza string
        printf("%s\n", linha);
    }
}

// Versão 3 — estilo C clássico (igual à do Python "versao_C")
void quadrado_asterisco_versao_C(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    quadrado_asteriscos(3);
    printf("\n");
    quadrado_asterisco_longo(3);
    printf("\n");
    quadrado_asterisco_versao_C(3);
    return 0;
}
