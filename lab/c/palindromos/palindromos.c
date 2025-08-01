#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Função 1: versão matemática para verificar palíndromo
bool number_is_palinder(int number) {
    int qtd_digitos = 0;
    int numeros_a_contar = number;

    while (numeros_a_contar > 0) {
        numeros_a_contar /= 10;
        qtd_digitos++;
    }

    while (qtd_digitos > 1) {
        int primeiro = number / (int)pow(10, qtd_digitos - 1);
        int ultimo = number % 10;

        if (primeiro != ultimo) {
            return false;
        }

        number = number % (int)pow(10, qtd_digitos - 1);
        number = number / 10;
        qtd_digitos -= 2;
    }
    return true;
}

// Função 2: usando string (adaptado para C)
bool number_is_palinder_2(int number) {
    char str[20];
    sprintf(str, "%d", number);
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Função 3: invertendo número matematicamente
bool eh_palindromo(int n) {
    int original = n;
    int invertido = 0;

    while (n > 0) {
        int ultimo_digito = n % 10;
        invertido = invertido * 10 + ultimo_digito;
        n /= 10;
    }

    return original == invertido;
}

int main() {
    int num = 567765;

    printf("%d\n", number_is_palinder(num));    // 1 == true
    printf("%d\n", number_is_palinder_2(num));  // 1 == true
    printf("%d\n", eh_palindromo(num));          // 1 == true

    return 0;
}
