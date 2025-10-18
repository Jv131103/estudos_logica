#include <stdio.h>
#include <regex.h>
#include <string.h>

int is_email(const char *email) {
    regex_t regex;
    int reti;
    const char *pattern = "^[A-Za-z0-9_.-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";

    reti = regcomp(&regex, pattern, REG_EXTENDED | REG_NOSUB);
    if (reti) {
        fprintf(stderr, "Erro ao compilar regex\n");
        return 0;
    }

    reti = regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);
    return (reti == 0);
}

const char* extract_dominio(const char *email, char *saida) {
    if (!is_email(email)) {
        strcpy(saida, "Não é EMAIL");
        return saida;
    }

    // Encontra o caractere '@' e copia o restante
    const char *arroba = strchr(email, '@');
    if (arroba && *(arroba + 1) != '\0') {
        strcpy(saida, arroba + 1);
        return saida;
    }

    strcpy(saida, "Domínio não encontrado");
    return saida;
}

int main(void) {
    const char *data_emails[] = {
        "teste@email.com.br",
        "olamundo.com",
        "jvj12@teste.com",
        "teste@gmail.com"
    };

    int total = sizeof(data_emails) / sizeof(data_emails[0]);
    char dominio[100];

    for (int i = 0; i < total; i++) {
        extract_dominio(data_emails[i], dominio);
        printf("%-25s -> %s\n", data_emails[i], dominio);
    }

    return 0;
}
