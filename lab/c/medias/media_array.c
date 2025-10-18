#include <stdio.h>

// media1 — com quantidade variável de argumentos (simulada)
double media1(double *valores, int n) {
    if (n == 0) return 0;
    double soma = 0;
    for (int i = 0; i < n; i++) soma += valores[i];
    return soma / n;
}

// media2 — recebe array e valida tamanho
double media2(double *valores, int n) {
    if (valores == NULL || n == 0) return 0;
    double soma = 0;
    for (int i = 0; i < n; i++) soma += valores[i];
    return soma / n;
}

// media3 — soma manual
double media3(double *valores, int n) {
    if (valores == NULL || n == 0) return 0;
    double soma = 0;
    for (int i = 0; i < n; i++) soma += valores[i];
    return soma / n;
}

// media4 — soma e conta manualmente
double media4(double *valores, int n) {
    if (valores == NULL || n == 0) return 0;
    double soma = 0;
    int total = 0;
    for (int i = 0; i < n; i++) {
        soma += valores[i];
        total++;
    }
    return soma / total;
}

int main(void) {
    double lista[] = {10, 20, 30};
    int n = sizeof(lista) / sizeof(lista[0]);

    printf("%.0f\n", media1(lista, n));
    printf("%.0f\n", media2(lista, n));
    printf("%.0f\n", media3(lista, n));
    printf("%.0f\n", media4(lista, n));

    return 0;
}
