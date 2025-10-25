#include <stdio.h>

int maximo_subarray(const int *v, int n) {
    int soma_atual = v[0];
    int soma_maxima = v[0];

    for (int i = 1; i < n; i++) {
        int x = v[i];

        if (soma_atual + x < x)
            soma_atual = x;          // recomeça
        else
            soma_atual = soma_atual + x;  // continua

        if (soma_atual > soma_maxima)
            soma_maxima = soma_atual;
    }

    return soma_maxima;
}

void maximo_subarray_indices(const int *v, int n, int *soma_max, int *ini_max, int *fim_max) {
    int soma_atual = v[0];
    *soma_max = v[0];
    int ini_atual = 0;
    *ini_max = 0;
    *fim_max = 0;

    for (int i = 1; i < n; i++) {
        int x = v[i];

        if (soma_atual + x < x) {
            soma_atual = x;
            ini_atual = i;
        } else {
            soma_atual = soma_atual + x;
        }

        if (soma_atual > *soma_max) {
            *soma_max = soma_atual;
            *ini_max = ini_atual;
            *fim_max = i;
        }
    }
}

int main(void) {
    int v[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(v)/sizeof(v[0]);

    int soma = maximo_subarray(v, n);
    printf("Soma maxima: %d\n", soma);

    int soma2, ini, fim;
    maximo_subarray_indices(v, n, &soma2, &ini, &fim);
    printf("Soma maxima: %d, indices: (%d, %d)\n", soma2, ini, fim);

    return 0;
}
