#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char texto[] = "Programacao em Python!";
    int contagem[256] = {0}; // conta qualquer caractere (ASCII estendido)

    for (int i = 0; texto[i] != '\0'; i++) {
        unsigned char c = tolower(texto[i]);
        if (isalpha(c)) {
            contagem[c]++;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (contagem[i] > 0) {
            printf("%c: %d\n", i, contagem[i]);
        }
    }

    return 0;
}
