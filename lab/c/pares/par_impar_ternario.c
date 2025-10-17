#include <stdio.h>
#include <math.h>
#include <stdbool.h>

const char* is_par_or_impar(double num) {
    // Verifica se o número é inteiro
    if (fmod(num, 1.0) != 0.0) {
        return "Não é inteiro";
    }

    int n = (int) num;
    if (n % 2 == 0)
        return "Par";
    else
        return "Impar";
}

void testes() {
    int i;
    // Testes com inteiros
    for (i = -5; i <= 5; i++) {
        printf("%d: %s\n", i, is_par_or_impar(i));
    }

    // Testes com decimais
    double decimais[] = {-3.5, -2.0, 0.0, 4.2, 7.7};
    int tamanho = sizeof(decimais) / sizeof(decimais[0]);

    for (i = 0; i < tamanho; i++) {
        printf("%.2f: %s\n", decimais[i], is_par_or_impar(decimais[i]));
    }

    // Simulação de outros tipos
    printf("true: Não é inteiro\n");
    printf("salve: Não é inteiro\n");
    printf("NULL: Não é inteiro\n");
}

int main(void) {
    testes();
    return 0;
}
