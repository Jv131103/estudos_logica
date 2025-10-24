#include <stdio.h>
#include <math.h>


const char* is_number_armstrong(int number) {
    int temp_calc = number;
    int digits[10];    // máximo 10 dígitos (int de 32 bits)
    int count = 0;

    // Extrai os dígitos
    while (temp_calc != 0) {
        int resto = temp_calc % 10;
        digits[count++] = resto;   // guarda cada dígito
        temp_calc /= 10;
    }

    int expoente = count;
    int soma_pot = 0;

    for (int i = 0; i < count; i++) {
        soma_pot += pow(digits[i], expoente);
    }

    return soma_pot == number ? "Armstrong" : "Not Armstrong";
}

const char* is_armstrong(int number) {
    int temp = number;
    int n = 0;

    // Conta os dígitos
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    int soma = 0;
    temp = number;

    // Soma das potências
    while (temp != 0) {
        int dig = temp % 10;
        soma += pow(dig, n);
        temp /= 10;
    }

    return soma == number ? "Armstrong" : "Not Armstrong";
}

int main() {
    printf("%s\n", is_number_armstrong(153));   // Armstrong
    printf("%s\n", is_number_armstrong(9474));  // Armstrong
    printf("%s\n", is_number_armstrong(9475));  // Not Armstrong
    printf("\n");
    printf("%s\n", is_armstrong(153));   // Armstrong
    printf("%s\n", is_armstrong(9474));  // Armstrong
    printf("%s\n", is_armstrong(9475));  // Not Armstrong
    return 0;
}
