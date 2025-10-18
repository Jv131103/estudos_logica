#include <stdio.h>
#include <string.h>
#include <regex.h>

void encontrar_palavras_especificas(const char *string, const char *palavra) {
    regex_t regex;
    regmatch_t pmatch[1];
    char padrao[100];
    const char *ptr = string;
    int offset = 0;

    // Monta o padrão regex dinamicamente, tipo: "\bpro\w*"
    snprintf(padrao, sizeof(padrao), "\\b%s[[:alnum:]_]*", palavra);

    if (regcomp(&regex, padrao, REG_ICASE | REG_EXTENDED)) {
        fprintf(stderr, "Erro ao compilar regex\n");
        return;
    }

    printf("[");
    int first = 1;

    while (regexec(&regex, ptr, 1, pmatch, 0) == 0) {
        int start = pmatch[0].rm_so;
        int end = pmatch[0].rm_eo;

        if (!first) printf(", ");
        first = 0;

        printf("\"");
        for (int i = start; i < end; i++) {
            putchar(ptr[i]);
        }
        printf("\"");

        ptr += end; // avança
    }

    printf("]\n");
    regfree(&regex);
}

int main(void) {
    const char *frase = "Eu gosto de programação e projetos produtivos";
    encontrar_palavras_especificas(frase, "pro");
    return 0;
}
