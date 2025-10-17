#include <stdio.h>
#include <regex.h>
#include <string.h>

int is_cep(const char *cep) {
    regex_t regex;
    int reti;

    // Remove espaços extras (trim manual simples)
    char clean[30];
    int i = 0, j = 0;
    while (cep[i] == ' ' || cep[i] == '\t' || cep[i] == '\n') i++; // pula espaços iniciais
    while (cep[i] && j < 29) {
        clean[j++] = cep[i++];
    }
    clean[j] = '\0';
    // remove espaços do final
    while (j > 0 && (clean[j - 1] == ' ' || clean[j - 1] == '\n' || clean[j - 1] == '\t')) {
        clean[--j] = '\0';
    }

    // Regex para CEP
    const char *pattern = "^[0-9]{5}-[0-9]{3}$";

    // Compila regex
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
    const char *data_ceps[] = {
        "12345-678",
        "0028978-123",
        "99990-9999",
        "24561-009"
    };

    int total = sizeof(data_ceps) / sizeof(data_ceps[0]);

    for (int i = 0; i < total; i++) {
        if (is_cep(data_ceps[i])) {
            printf("%s -> Válido\n", data_ceps[i]);
        } else {
            printf("%s -> Inválido\n", data_ceps[i]);
        }
    }

    return 0;
}
