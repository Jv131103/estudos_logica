#include <stdio.h>
#include <stdlib.h>

// Versão 1 — normal
float maior_valor_lido(int qtd) {
    float maior, valor;
    printf("Digite um valor: ");
    scanf("%f", &maior);

    for (int i = 0; i < qtd - 1; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valor);
        if (valor > maior) {
            maior = valor;
        }
    }
    return maior;
}

// Versão 2 — comprimida
float maior_valor_lido_comprimido(int qtd) {
    float maior, valor;
    printf("Digite um valor: ");
    scanf("%f", &maior);

    for (int i = 0; i < qtd - 1; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valor);
        maior = (valor > maior) ? valor : maior;
    }
    return maior;
}

// Versão 3 — com lista (vetor)
float maior_valor_lido_lista(int qtd) {
    float *valores = malloc(qtd * sizeof(float));
    if (!valores) {
        printf("Erro de memória.\n");
        return -1;
    }

    for (int i = 0; i < qtd; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
    }

    float maior = valores[0];
    for (int i = 0; i < qtd; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    free(valores);
    return maior;
}

int main(void) {
    int qtd = 5;
    float maior;

    maior = maior_valor_lido(qtd);
    printf("Maior = %.2f\n", maior);

    maior = maior_valor_lido_comprimido(qtd);
    printf("Maior = %.2f\n", maior);

    maior = maior_valor_lido_lista(qtd);
    printf("Maior = %.2f\n", maior);

    return 0;
}
