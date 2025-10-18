#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contar_caracteres1(const char *string, char caracter) {
    if (!string || caracter == '\0') return 0;
    int cont = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (tolower((unsigned char)string[i]) == tolower((unsigned char)caracter)) {
            cont++;
        }
    }
    return cont;
}

int contar_caracteres2(const char *string, char caracter) {
    // Igual à 1, apenas variação de estilo
    return contar_caracteres1(string, caracter);
}

// sem regex, apenas versões básicas
int contar_caracteres4(const char *string, char caracter) {
    int cont = 0;
    for (const char *p = string; *p; p++) {
        if (tolower((unsigned char)*p) == tolower((unsigned char)caracter))
            cont++;
    }
    return cont;
}

int main(void) {
    const char *texto = "abacaxi";
    printf("%d\n", contar_caracteres1(texto, 'a'));
    printf("%d\n", contar_caracteres2(texto, 'a'));
    printf("%d\n", contar_caracteres4(texto, 'a'));
    return 0;
}
