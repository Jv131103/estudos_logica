#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contar_palavras1(const char *texto) {
    int cont = 0;
    int dentro_palavra = 0;

    for (int i = 0; texto[i] != '\0'; i++) {
        if (!isspace((unsigned char)texto[i]) && !dentro_palavra) {
            dentro_palavra = 1;
            cont++;
        } else if (isspace((unsigned char)texto[i])) {
            dentro_palavra = 0;
        }
    }
    return cont;
}

int contar_palavras2(const char *texto) {
    int cont = 0;
    int i = 0;

    // pula espaços iniciais
    while (isspace((unsigned char)texto[i])) i++;
    if (texto[i] == '\0') return 0;

    cont = 1;
    for (; texto[i] != '\0'; i++) {
        if (isspace((unsigned char)texto[i])) {
            // verifica se o próximo caractere não é espaço
            while (isspace((unsigned char)texto[i])) i++;
            if (texto[i] != '\0')
                cont++;
        }
    }
    return cont;
}

int main(void) {
    const char *testes[] = {
        "Eu gosto de estudar programação",
        "Olá",
        "Olá Mundo",
        "",
        "   "
    };

    int total = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < total; i++) {
        printf("%d\n", contar_palavras1(testes[i]));
        printf("%d\n", contar_palavras2(testes[i]));
        printf("%d\n\n", contar_palavras1(testes[i])); // sem regex em C
    }

    return 0;
}
