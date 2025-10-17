#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função 1 — remove espaços exagerados (mantém um por vez)
void remover_espacos_exagerados1(const char *text, int one_pharase, char *saida) {
    int len = strlen(text);
    int cont = 0;
    int j = 0;

    // Ignora espaços no início e no fim
    int start = 0, end = len - 1;
    while (isspace((unsigned char)text[start])) start++;
    while (end >= 0 && isspace((unsigned char)text[end])) end--;

    for (int i = start; i <= end; i++) {
        char c = text[i];
        if (!isspace((unsigned char)c)) {
            saida[j++] = c;
            cont = 0;
        } else {
            if (one_pharase)
                continue; // remove todos os espaços
            if (cont == 0) {
                saida[j++] = ' '; // mantém só um espaço
                cont++;
            }
        }
    }
    saida[j] = '\0';
}

// Função 2 — versão "curta"
void remover_espacos_exagerados2(const char *text, int one_pharase, char *saida) {
    char temp[200];
    int i = 0, j = 0, cont = 0;
    int len = strlen(text);

    // Remove espaços no início e fim
    int start = 0, end = len - 1;
    while (isspace((unsigned char)text[start])) start++;
    while (end >= 0 && isspace((unsigned char)text[end])) end--;

    for (i = start; i <= end; i++) {
        if (isspace((unsigned char)text[i])) {
            if (one_pharase)
                continue;
            if (cont == 0) {
                temp[j++] = ' ';
                cont++;
            }
        } else {
            temp[j++] = text[i];
            cont = 0;
        }
    }
    temp[j] = '\0';
    strcpy(saida, temp);
}

// -------------------- Testes --------------------
int main(void) {
    char texto1[] = "esse  texto  veio todo quebrado";
    char saida[200];

    remover_espacos_exagerados1(texto1, 0, saida);
    printf("%s\n", saida);

    remover_espacos_exagerados2(texto1, 0, saida);
    printf("%s\n", saida);

    char texto2[] = "o la";
    remover_espacos_exagerados1(texto2, 1, saida);
    printf("%s\n", saida);

    remover_espacos_exagerados2(texto2, 1, saida);
    printf("%s\n", saida);

    return 0;
}
