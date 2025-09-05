#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Retorna 1 se for palíndromo, 0 caso contrário
int palindromo1(const char texto[]) {
    char sem_espacos[100];
    int j = 0;

    // 1) Normalizar: remover espaços e colocar em minúsculo
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ') {
            sem_espacos[j] = tolower(texto[i]); // deixa minúsculo
            j++;
        }
    }
    sem_espacos[j] = '\0';

    // 2) Verificar palíndromo
    int inicio = 0;
    int fim = strlen(sem_espacos) - 1;

    while (inicio < fim) {
        if (sem_espacos[inicio] != sem_espacos[fim]) {
            return 0; // não é palíndromo
        }
        inicio++;
        fim--;
    }

    return 1; // é palíndromo
}

const char* palindromo_numerico(int numero) {
    int original = numero;
    int inverso = 0;

    while (numero > 0) {
        int resto = numero % 10;
        inverso = inverso * 10 + resto;
        numero = numero / 10; // divisão inteira padrão em C
    }

    return (inverso == original) ? "SIM" : "NAO";
}

int main() {
    char texto[] = "asa";

    if (palindromo1(texto)) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    printf("%s\n", palindromo_numerico(121));

    return 0;
}
