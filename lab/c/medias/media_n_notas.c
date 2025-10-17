#include <stdio.h>
#include <stdlib.h>

// Versão 1 — com soma declarada dentro do laço
float media_de_n_notas(int n) {
    float nota, soma = 0.0;
    for (int i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("nota inválida\n");
            return -1; // usamos -1 como código de erro
        }

        soma += nota;
    }
    return soma / n;
}

// Versão 2 — comprimida
float media_de_n_notas_comprimido(int n) {
    float soma = 0.0, nota;
    for (int i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("nota inválida\n");
            return -1;
        }
        soma += nota;
    }
    return soma / n;
}

// Versão 3 — usando vetor (lista real)
float media_de_n_notas_lista(int n) {
    float *notas = malloc(n * sizeof(float));
    if (!notas) {
        printf("Erro de alocação de memória\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] < 0 || notas[i] > 10) {
            printf("nota inválida\n");
            free(notas);
            return -1;
        }
    }

    float soma = 0.0;
    for (int i = 0; i < n; i++) soma += notas[i];
    free(notas);

    return soma / n;
}

// Versão 4 — comprimida com vetor
float media_de_n_notas_lista_comprimido(int n) {
    float *notas = malloc(n * sizeof(float));
    if (!notas) {
        printf("Erro de alocação de memória\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < n; i++) {
        if (notas[i] < 0 || notas[i] > 10) {
            printf("nota inválida\n");
            free(notas);
            return -1;
        }
    }

    float soma = 0.0;
    for (int i = 0; i < n; i++) soma += notas[i];
    free(notas);

    return soma / n;
}

int main(void) {
    int n = 4;
    float media;

    media = media_de_n_notas(n);
    if (media != -1) printf("Média: %.2f\n", media);

    media = media_de_n_notas_comprimido(n);
    if (media != -1) printf("Média: %.2f\n", media);

    media = media_de_n_notas_lista(n);
    if (media != -1) printf("Média: %.2f\n", media);

    media = media_de_n_notas_lista_comprimido(n);
    if (media != -1) printf("Média: %.2f\n", media);

    return 0;
}
