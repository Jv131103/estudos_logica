#include <stdio.h>

// Versão 1: usando strlen (biblioteca padrão)
#include <string.h>
int contagem1(const char *string) {
    return strlen(string);
}

// Versão 2: contando manualmente
int contagem2(const char *string) {
    int tam = 0;
    while (string[tam] != '\0') {
        tam++;
    }
    return tam;
}

// Versão 3: loop parecido com a 2 (simulação manual)
int contagem3(const char *string) {
    int cont = 0;
    while (string[cont] != '\0') {
        cont++;
    }
    return cont;
}

int main() {
    char string[100];
    scanf("%99s", string); // lê string sem espaços

    printf("%d\n", contagem1(string));
    printf("%d\n", contagem2(string));
    printf("%d\n", contagem3(string));

    return 0;
}
