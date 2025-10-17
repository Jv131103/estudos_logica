#include <stdio.h>
#include <regex.h>

int is_email(const char *email) {
    regex_t regex;
    int reti;

    // Mesmo padrão do Python (POSIX aceita escapes normais)
    const char *pattern = "^[A-Za-z0-9_.-]+@[A-Za-z0-9.-]+\\.[A-Za-z0-9.-]{2,}$";

    // Compila a regex
    reti = regcomp(&regex, pattern, REG_EXTENDED | REG_NOSUB | REG_ICASE);
    if (reti) {
        fprintf(stderr, "Erro ao compilar regex\n");
        return 0;
    }

    // Executa a regex
    reti = regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);

    // regexec retorna 0 se deu match
    if (!reti) return 1;
    else return 0;
}

int main(void) {
    const char *emails[] = {
        "teste@email.com",
        "olamundo.com",
        "jvj12@teste.com"
    };

    int n = sizeof(emails) / sizeof(emails[0]);

    for (int i = 0; i < n; i++) {
        if (is_email(emails[i]))
            printf("%s → Válido\n", emails[i]);
        else
            printf("%s → Inválido\n", emails[i]);
    }

    return 0;
}
