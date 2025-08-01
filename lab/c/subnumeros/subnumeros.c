#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

// Função 1: usando string (adaptada para C com snprintf e strstr)
bool versao1(int numero, int subnumero) {
    char str_numero[20];
    char str_subnumero[20];

    // Converte os números para string
    snprintf(str_numero, sizeof(str_numero), "%d", numero);
    snprintf(str_subnumero, sizeof(str_subnumero), "%d", subnumero);

    // Procura o subnúmero na string do número
    return strstr(str_numero, str_subnumero) != NULL;
}

// Função 2: sem string, só matemática
bool versao2(int numero, int subnumero) {
    int qtd_digitos = 0;
    int numeros_a_contar = subnumero;

    // Conta quantos dígitos tem o subnúmero
    while (numeros_a_contar > 0) {
        numeros_a_contar /= 10;
        qtd_digitos++;
    }

    // Enquanto ainda há blocos para comparar
    while (numero >= (int)pow(10, qtd_digitos - 1)) {
        if (numero % (int)pow(10, qtd_digitos) == subnumero) {
            return true;
        }
        numero /= 10;
    }

    return false;
}

int main() {
    printf("%d\n", versao1(57238, 23));   // 1 (true)
    printf("%d\n", versao1(258347, 23));  // 0 (false)
    printf("%d\n", versao2(57238, 23));   // 1 (true)
    printf("%d\n", versao2(258347, 23));  // 0 (false)

    return 0;
}
