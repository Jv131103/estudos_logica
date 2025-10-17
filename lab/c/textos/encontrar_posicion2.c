#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função auxiliar para comparar strings ignorando maiúsculas/minúsculas
int strncasecmp_custom(const char *s1, const char *s2, size_t n) {
    for (size_t i = 0; i < n; i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 != c2) return 0; // diferente
    }
    return 1; // iguais
}

int encontrar_posicion(const char *string, const char *value, int posicoes[], int max) {
    int len_str = strlen(string);
    int len_val = strlen(value);
    int count = 0;

    for (int i = 0; i <= len_str - len_val; i++) {
        if (strncasecmp_custom(string + i, value, len_val)) {
            if (count < max) posicoes[count++] = i;
        }
    }
    return count;
}

void print_result(const char *text, const char *value) {
    int pos[100];
    int qtd = encontrar_posicion(text, value, pos, 100);

    printf("'%s' em '%s' -> ", value, text);

    if (qtd == 0)
        printf("-1\n");
    else if (qtd == 1)
        printf("[%d]\n", pos[0]);
    else {
        printf("[");
        for (int i = 0; i < qtd; i++) {
            printf("%d", pos[i]);
            if (i < qtd - 1) printf(", ");
        }
        printf("]\n");
    }
}

int main(void) {
    const char *text = "teste";

    print_result(text, "tes"); // [0]
    print_result(text, "est"); // [1]
    print_result(text, "ste"); // [2]
    print_result(text, "x");   // -1
    print_result(text, "s");   // [2]
    print_result(text, "t");   // [0, 4]

    return 0;
}
