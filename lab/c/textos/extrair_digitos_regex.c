#include <stdio.h>
#include <regex.h>
#include <string.h>

void extrair_digitos(const char *texto, char *saida) {
    regex_t regex;
    regmatch_t pmatch[1];
    const char *pattern = "[0-9]+";
    const char *ptr = texto;
    int offset = 0;

    // compila regex
    if (regcomp(&regex, pattern, REG_EXTENDED)) {
        fprintf(stderr, "Erro ao compilar regex\n");
        saida[0] = '\0';
        return;
    }

    saida[0] = '\0'; // inicializa string de saída

    // busca todos os números
    while (regexec(&regex, ptr, 1, pmatch, 0) == 0) {
        int start = pmatch[0].rm_so;
        int end = pmatch[0].rm_eo;

        // copia cada bloco numérico encontrado
        for (int i = start; i < end; i++) {
            saida[offset++] = ptr[i];
        }

        ptr += end; // avança na string
    }

    saida[offset] = '\0';
    regfree(&regex);
}

int main(void) {
    char resultado[200];

    extrair_digitos("abc123def45", resultado);
    printf("%s\n", resultado); // 12345

    extrair_digitos("telefone: (11) 98877-2233", resultado);
    printf("%s\n", resultado); // 11988772233

    extrair_digitos("sem números aqui", resultado);
    printf("%s\n", resultado); // ""

    return 0;
}
