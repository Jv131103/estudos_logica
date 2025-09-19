#include <stdio.h>
#include <stdlib.h>

const char* conceito(double nota) {
    if (nota < 0 || nota > 10) {
        return "Nota inválida";
    }

    if (nota >= 9) {
        return "A";
    } else if (nota >= 7) {
        return "B";
    } else if (nota >= 5) {
        return "C";
    } else {
        return "D";
    }
}

int main() {
    double notas[] = {10, 9.95, 9, 8, 8.2, 7, 6.99, 7.35, 5.97, 5, 6, 4, 3, 2, 1, 0};
    int tamanho = sizeof(notas) / sizeof(notas[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("%.2f -> %s\n", notas[i], conceito(notas[i]));
    }

    return 0;
}
