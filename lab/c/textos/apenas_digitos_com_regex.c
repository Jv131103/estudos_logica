#include <stdio.h>
#include <string.h>
#include <regex.h>
#include <ctype.h>

const char* isdigit_regex(const char *value) {
    if (!value) return "NÃO";

    // Se a string for um número direto (apenas dígitos e possivelmente sinal)
    int tem_numero = 0;
    int tem_letra = 0;

    // Se for número (ex: 123, -45, 12.5, 12,5)
    regex_t regex;
    const char *pattern = "^-?[0-9]+([.,][0-9]+)?$";
    if (regcomp(&regex, pattern, REG_EXTENDED) != 0)
        return "NÃO";

    int match = regexec(&regex, value, 0, NULL, 0);
    regfree(&regex);
    if (match == 0) return "SIM";

    // Tenta detectar se valor já é numérico puro (ex: int, float)
    for (int i = 0; value[i] != '\0'; i++) {
        if (isdigit((unsigned char)value[i])) tem_numero = 1;
        if (isalpha((unsigned char)value[i])) tem_letra = 1;
    }

    return (!tem_letra && tem_numero) ? "SIM" : "NÃO";
}

int main(void) {
    const char *testes[] = {
        "12345", "-12345", "12345.5", "12345,5", " 12345 ",
        "123a45", "-123a45", "-12 345", "abcde", "-abcde"
    };
    int n = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < n; i++) {
        printf("%-10s -> %s\n", testes[i], isdigit_regex(testes[i]));
    }

    return 0;
}
