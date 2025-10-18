#include <stdio.h>
#include <regex.h>

int is_url(const char *url) {
    regex_t regex;
    int reti;

    // Regex semelhante à do Python
    const char *pattern = "^https?://[A-Za-z0-9_.-]+\\.[A-Za-z]{2,}(/[^\n\r\t ]*)?$";

    reti = regcomp(&regex, pattern, REG_EXTENDED | REG_NOSUB);
    if (reti) {
        fprintf(stderr, "Erro ao compilar regex\n");
        return 0;
    }

    reti = regexec(&regex, url, 0, NULL, 0);
    regfree(&regex);

    return (reti == 0);
}

int main(void) {
    const char *urls[] = {
        "https://www.google.com",
        "http://meusite.org",
        "https://openai.com/research",
        "https://sub.dominio.gov.br/teste",
        "ftp://arquivo.com",
        "http://",
        "https://meu site.com",
        "https://meusite"
    };

    int total = sizeof(urls) / sizeof(urls[0]);

    for (int i = 0; i < total; i++) {
        printf("%-35s -> %s\n", urls[i], is_url(urls[i]) ? "Válido" : "Inválido");
    }

    return 0;
}
