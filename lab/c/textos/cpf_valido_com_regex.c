#include <stdio.h>
#include <string.h>
#include <regex.h>

int is_cpf(const char *cpf) {
    regex_t regex;
    int reti;

    // Remove espaços extras nas pontas
    char clean[30];
    int i = 0, j = 0;
    while (cpf[i] == ' ' || cpf[i] == '\t' || cpf[i] == '\n') i++;
    while (cpf[i] && j < 29) clean[j++] = cpf[i++];
    clean[j] = '\0';
    while (j > 0 && (clean[j-1] == ' ' || clean[j-1] == '\n' || clean[j-1] == '\t')) {
        clean[--j] = '\0';
    }

    // Regex do formato 000.000.000-00
    const char *pattern = "^[0-9]{3}\\.[0-9]{3}\\.[0-9]{3}-[0-9]{2}$";

    // Compila a regex
    reti = regcomp(&regex, pattern, REG_EXTENDED | REG_NOSUB);
    if (reti) {
        fprintf(stderr, "Erro ao compilar regex\n");
        return 0;
    }

    // Executa regex
    reti = regexec(&regex, clean, 0, NULL, 0);
    regfree(&regex);

    return (reti == 0);
}

int main(void) {
    const char *cpfs[] = {
        "123.456.789-10",
        "111.111.111-11",
        "12345678910",
        "12.3456.789-10",
        "123.456.789-100"
    };

    int total = sizeof(cpfs) / sizeof(cpfs[0]);

    for (int i = 0; i < total; i++) {
        printf("%s -> %s\n", cpfs[i], is_cpf(cpfs[i]) ? "Válido" : "Inválido");
    }

    return 0;
}
