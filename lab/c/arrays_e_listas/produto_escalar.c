#include <stdio.h>
#include <stdlib.h>

double produto_escalar(double *v1, double *v2, int n1, int n2) {
    if (n1 != n2) {
        fprintf(stderr, "Erro: Vetores precisam ter o mesmo tamanho\n");
        exit(1);
    }

    double soma = 0;
    for (int i = 0; i < n1; i++) {
        soma += v1[i] * v2[i];
    }
    return soma;
}

double produto_escalar2(double *v1, double *v2, int n1, int n2) {
    if (n1 != n2) {
        fprintf(stderr, "Erro: Vetores precisam ter o mesmo tamanho\n");
        exit(1);
    }

    double soma = 0;
    for (int i = 0; i < n1; i++) {
        soma += v1[i] * v2[i];
    }
    return soma;
}

int main(void) {
    double v1[] = {1, 2, 3};
    double v2[] = {4, 5, 6};
    int n = sizeof(v1) / sizeof(v1[0]);

    printf("%.0f\n", produto_escalar(v1, v2, n, n));
    printf("%.0f\n", produto_escalar2(v1, v2, n, n));

    return 0;
}
