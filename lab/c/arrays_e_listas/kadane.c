#include <stdio.h>
#include <limits.h>

static inline long long maior(long long a, long long b) {
    return (a > b) ? a : b;
}

/* Versão básica: só a soma máxima */
long long kadane(const long long *arr, int n) {
    if (n <= 0) return 0; // ou: LLONG_MIN, conforme seu contrato

    long long soma_atual = arr[0];
    long long soma_max   = arr[0];

    for (int i = 1; i < n; i++) {
        soma_atual = maior(arr[i], soma_atual + arr[i]);  // continuar ou recomeçar
        soma_max   = maior(soma_max, soma_atual);         // atualiza melhor global
    }
    return soma_max;
}

/* Versão com índices: devolve soma e escreve [l, r] via ponteiros */
long long kadane_indices(const long long *a, int n, int *l, int *r) {
    if (n <= 0) { if (l) *l = -1; if (r) *r = -1; return 0; } // contrato simples

    long long soma_atual = a[0], soma_max = a[0];
    int inicio_temp = 0;
    int best_l = 0, best_r = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > soma_atual + a[i]) {
            soma_atual = a[i];
            inicio_temp = i;       // recomeça aqui
        } else {
            soma_atual += a[i];    // continua
        }

        if (soma_atual > soma_max) {
            soma_max = soma_atual;
            best_l = inicio_temp;
            best_r = i;
        }
    }

    if (l) *l = best_l;
    if (r) *r = best_r;
    return soma_max;
}

int main(void) {
    long long v1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = (int)(sizeof v1 / sizeof v1[0]);

    long long soma1 = kadane(v1, n1);
    printf("Soma maxima (basica): %lld\n", soma1);

    int l = -1, r = -1;
    long long soma2 = kadane_indices(v1, n1, &l, &r);
    printf("Soma maxima (com indices): %lld, intervalo [%d, %d]\n", soma2, l, r);

    // Caso “todos negativos”
    long long v2[] = {-8, -3, -6, -2, -5, -4};
    int n2 = (int)(sizeof v2 / sizeof v2[0]);
    long long soma3 = kadane(v2, n2);
    printf("Soma maxima (todos negativos): %lld\n", soma3);

    return 0;
}
