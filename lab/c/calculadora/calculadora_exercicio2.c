#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char entrada[100];
    double n1, n2;

    while (1) {
        printf("Digite dois numeros (ou ! para sair): ");
        if (!fgets(entrada, sizeof(entrada), stdin)) break;

        // substituir vírgula por ponto
        for (int i = 0; entrada[i]; i++) {
            if (entrada[i] == ',') entrada[i] = '.';
        }

        if (strchr(entrada, '!')) {
            break;
        }

        if (sscanf(entrada, "%lf %lf", &n1, &n2) != 2) {
            printf("Invalido, digite apenas numeros\n");
            continue;
        }

        printf("Soma: %.2f\n", n1 + n2);
        printf("Subtracao: %.2f\n", n1 - n2);
        printf("Multiplicacao: %.2f\n", n1 * n2);
        if (n2 != 0) {
            printf("Divisao: %.2f\n", n1 / n2);
        } else {
            printf("Divisao: Division Error\n");
        }
    }

    return 0;
}
