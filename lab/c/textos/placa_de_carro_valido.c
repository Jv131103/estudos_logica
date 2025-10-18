#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <regex.h>

// Regex padrões
#define RE_ANTIGA "^[A-Z]{3}-?[0-9]{4}$"
#define RE_MERCOSUL "^[A-Z]{3}[0-9][A-Z][0-9]{2}$"

void validar_placa_br(const char *placa, int *valida, char *tipo) {
    regex_t re_antiga, re_mercosul;
    char p[50];
    int reti;

    // Remove espaços e coloca em maiúsculas
    int j = 0;
    for (int i = 0; placa[i] != '\0'; i++) {
        if (!isspace((unsigned char)placa[i])) {
            p[j++] = toupper((unsigned char)placa[i]);
        }
    }
    p[j] = '\0';

    // Compila as expressões regulares
    regcomp(&re_antiga, RE_ANTIGA, REG_EXTENDED | REG_NOSUB);
    regcomp(&re_mercosul, RE_MERCOSUL, REG_EXTENDED | REG_NOSUB);

    // Testa o formato antigo
    reti = regexec(&re_antiga, p, 0, NULL, 0);
    if (reti == 0) {
        *valida = 1;
        strcpy(tipo, "ANTIGA");
        goto end;
    }

    // Testa o formato Mercosul
    reti = regexec(&re_mercosul, p, 0, NULL, 0);
    if (reti == 0) {
        *valida = 1;
        strcpy(tipo, "MERCOSUL");
        goto end;
    }

    // Caso inválido
    *valida = 0;
    strcpy(tipo, "");

end:
    regfree(&re_antiga);
    regfree(&re_mercosul);
}

int main(void) {
    const char *placas[] = {
        "ABC-1234",
        "ABC1234",
        "BRA2E19",
        "abc1d23",
        "AB-1234",
        "ABCD-1234",
        "ABC12D3"
    };

    int total = sizeof(placas) / sizeof(placas[0]);

    for (int i = 0; i < total; i++) {
        int ok;
        char tipo[20];
        validar_placa_br(placas[i], &ok, tipo);
        printf("%-10s -> %s\n", placas[i], ok ? (strcmp(tipo, "ANTIGA") == 0 ? "Válida: ANTIGA" : "Válida: MERCOSUL") : "Inválida");
    }

    return 0;
}
