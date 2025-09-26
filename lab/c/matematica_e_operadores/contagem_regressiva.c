#include <stdio.h>

void contagem_regressiva_for(int numero);
void contagem_regressiva_while(int numero);
void contagem_regressiva_dowhile(int numero);

int main() {
    contagem_regressiva_for(5);
    contagem_regressiva_while(5);
    contagem_regressiva_dowhile(5);
    return 0;
}

void contagem_regressiva_for(int numero) {
    for (int i = numero; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

void contagem_regressiva_while(int numero) {
    int i = numero;
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n");
}

void contagem_regressiva_dowhile(int numero) {
    int i = numero;
    do {
        printf("%d ", i);
        i--;
    } while (i >= 0);
    printf("\n");
}
