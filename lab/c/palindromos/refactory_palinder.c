#include <stdio.h>
#include <string.h>
#include <ctype.h>

// função para "normalizar": deixar minúsculo e tirar espaços
void normalizar(const char *orig, char *dest) {
    int j = 0;
    for (int i = 0; orig[i] != '\0'; i++) {
        if (!isspace((unsigned char)orig[i])) {   // ignora espaços
            dest[j++] = tolower((unsigned char)orig[i]);
        }
    }
    dest[j] = '\0'; // termina a string
}

// função que verifica se é palíndromo
int is_palindromo(const char *texto) {
    char norm[256];     // buffer para string normalizada
    normalizar(texto, norm);

    int i = 0;
    int j = strlen(norm) - 1;

    while (i < j) {
        if (norm[i] != norm[j]) {
            return 0; // não é palíndromo
        }
        i++;
        j--;
    }
    return 1; // é palíndromo
}

int main() {
    const char *testes[] = {"", "a", "aa", "ab", "Radar", "a sac a"};
    int n = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < n; i++) {
        if (is_palindromo(testes[i])) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}
