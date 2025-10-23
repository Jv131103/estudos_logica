#include <stdio.h>

#define MAX_DIGITOS 500   // suporta até 100! (tem ~158 dígitos)

void multiplica_vetor_por_inteiro(int vetor[], int *tamanho, int k) {
    int carry = 0;
    for (int i = 0; i < *tamanho; i++) {
        int produto = vetor[i] * k + carry;
        vetor[i] = produto % 10;
        carry = produto / 10;
    }
    while (carry > 0) {
        vetor[*tamanho] = carry % 10;
        carry /= 10;
        (*tamanho)++;
    }
}

void big_fatorial(int n) {
    int resultado[MAX_DIGITOS];
    int tamanho = 1;
    resultado[0] = 1;  // começa com 1

    for (int multiplicador = 2; multiplicador <= n; multiplicador++) {
        multiplica_vetor_por_inteiro(resultado, &tamanho, multiplicador);
    }

    // imprime de trás pra frente
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d", resultado[i]);
    }
    printf("\n");
}

int main() {
    big_fatorial(10);  // saída: 3628800
    return 0;
}
