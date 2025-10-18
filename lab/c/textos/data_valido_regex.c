#include <stdio.h>
#include <regex.h>
#include <string.h>

int is_valid_date(const char *date) {
    regex_t regex;
    int reti;

    const char *pattern = "^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/([0-9]{2}|[0-9]{4})$";

    // Compila a expressão regular
    reti = regcomp(&regex, pattern, REG_EXTENDED | REG_NOSUB);
    if (reti) {
        fprintf(stderr, "Erro ao compilar regex\n");
        return 0;
    }

    // Executa a verificação
    reti = regexec(&regex, date, 0, NULL, 0);
    regfree(&regex);

    return (reti == 0);
}

int main(void) {
    const char *dates[] = {
        "25/12/2025",
        "23/02/25",
        "13/12/2025",
        "45/19/2024",
        "00/00/00",
        "5/2/2024"
    };

    int total = sizeof(dates) / sizeof(dates[0]);

    for (int i = 0; i < total; i++) {
        printf("%-10s -> %s\n", dates[i],
               is_valid_date(dates[i]) ? "Válida" : "Inválida");
    }

    return 0;
}
