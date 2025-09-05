#include <stdio.h>
#include <string.h>

void inverter(const char *texto, char *resultado) {
    int len = strlen(texto);
    for (int i = 0; i < len; i++) {
        resultado[i] = texto[len - 1 - i];
    }
    resultado[len] = '\0'; // finaliza string
    printf("%s\n", resultado);
}

int main() {
    char palavra1[] = "casa";
    char palavra2[] = "radar";
    char invertida[50];

    inverter(palavra1, invertida);

    inverter(palavra2, invertida);
    if (strcmp(invertida, palavra2) == 0) {
        printf("É palíndromo\n");
    }

    return 0;
}
