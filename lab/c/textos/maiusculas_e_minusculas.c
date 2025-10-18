#include <stdio.h>
#include <ctype.h>
#include <string.h>

void minuscula_e_maiuscula1(const char *texto) {
    printf("VERSÃO 1: tolower e toupper\n");
    for (int i = 0; texto[i] != '\0'; i++)
        putchar(tolower((unsigned char)texto[i]));
    printf("\n");
    for (int i = 0; texto[i] != '\0'; i++)
        putchar(toupper((unsigned char)texto[i]));
    printf("\n");
}

void minuscula_e_maiuscula2(const char *texto) {
    printf("VERSÃO 2: ASCII manual\n");
    char minusculas[256] = "", maiusculas[256] = "";
    int i = 0;

    while (texto[i] != '\0') {
        char c = texto[i];
        if (c >= 'A' && c <= 'Z') {
            minusculas[i] = c + 32;
            maiusculas[i] = c;
        } else if (c >= 'a' && c <= 'z') {
            minusculas[i] = c;
            maiusculas[i] = c - 32;
        } else {
            minusculas[i] = c;
            maiusculas[i] = c;
        }
        i++;
    }
    minusculas[i] = '\0';
    maiusculas[i] = '\0';

    printf("%s\n", minusculas);
    printf("%s\n", maiusculas);
}

void minuscula_e_maiuscula3(const char *texto) {
    printf("VERSÃO 3: tabela de tradução\n");
    char minusculas[256] = "", maiusculas[256] = "";
    char letras_maiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letras_minusculas[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];
        int found = 0;
        for (int j = 0; j < 26; j++) {
            if (c == letras_maiusculas[j]) {
                minusculas[i] = letras_minusculas[j];
                maiusculas[i] = c;
                found = 1;
                break;
            } else if (c == letras_minusculas[j]) {
                minusculas[i] = c;
                maiusculas[i] = letras_maiusculas[j];
                found = 1;
                break;
            }
        }
        if (!found) {
            minusculas[i] = c;
            maiusculas[i] = c;
        }
    }
    printf("%s\n", minusculas);
    printf("%s\n", maiusculas);
}

int main(void) {
    const char *testes[] = {"Ola", "TESTE", "salve", "Python"};
    int n = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < n; i++) {
        minuscula_e_maiuscula1(testes[i]);
        minuscula_e_maiuscula2(testes[i]);
        minuscula_e_maiuscula3(testes[i]);
        printf("\n");
    }

    return 0;
}
