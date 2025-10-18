#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Conta letras maiúsculas (A-Z e letras acentuadas simples entre À e Ý em UTF-8)
int contar_maiusculas(const char *string) {
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        unsigned char c = string[i];

        // Letras maiúsculas padrão
        if (isupper(c)) {
            count++;
        }
        // Letras maiúsculas acentuadas (faixa aproximada do Latin-1)
        else if (c >= 192 && c <= 221) { // 192 = À, 221 = Ý
            count++;
        }
    }

    return count;
}

int main(void) {
    const char *texto = "Eu Gosto de Programar em Python";
    printf("%d\n", contar_maiusculas(texto));
    return 0;
}
