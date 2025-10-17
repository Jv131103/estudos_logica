#include <stdio.h>

// Versão 1
void triangulo_asterisco(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Versão 2
void triangulo_asterisco2(int n) {
    for (int i = 1; i <= n; i++) {
        char linha[100];
        int k = 0;
        for (int j = 0; j < i; j++) {
            linha[k++] = '*';
        }
        linha[k] = '\0';
        printf("%s\n", linha);
    }
}

// Versão 3
void triangulo_asterisco3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Versão 4
void triangulo_asterisco4(int n) {
    char linha[100] = "*";
    for (int i = 1; i <= n; i++) {
        printf("%s\n", linha);
        int len = i; // tamanho atual
        linha[len] = '*';
        linha[len + 1] = '\0';
    }
}

int main(void) {
    triangulo_asterisco(5);
    printf("\n");
    triangulo_asterisco2(5);
    printf("\n");
    triangulo_asterisco3(5);
    printf("\n");
    triangulo_asterisco4(5);
    return 0;
}
