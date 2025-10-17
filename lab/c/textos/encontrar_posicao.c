#include <stdio.h>
#include <string.h>
#include <ctype.h>

int tolower_strcmp(char a, char b) {
    return tolower(a) == tolower(b);
}

int encontrar_posicion(const char *string, const char *value, int posicoes[], int max_pos) {
    int len_str = strlen(string);
    int len_val = strlen(value);
    int count = 0;

    if (len_val > 1) {
        int posicao = 0;
        for (int i = 0; i < len_str; i++) {
            if (tolower_strcmp(string[i], value[posicao])) {
                if (count < max_pos) posicoes[count++] = i;
                if (posicao != len_val - 1) posicao++;
            }
        }
    } else {
        for (int i = 0; i < len_str; i++) {
            if (tolower_strcmp(string[i], value[0])) {
                if (count < max_pos) posicoes[count++] = i;
            }
        }
    }
    return count; // retorna quantos foram encontrados
}

void print_result(const char *text, const char *value) {
    int pos[100];
    int qtd = encontrar_posicion(text, value, pos, 100);

    printf("'%s' em '%s' -> ", value, text);

    if (qtd == 0)
        printf("-1\n");
    else if (qtd == 1)
        printf("%d\n", pos[0]);
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

    print_result(text, "tes"); // [0, 1, 2]
    print_result(text, "est"); // [1, 2, 3]
    print_result(text, "ste"); // [2, 3, 4]
    print_result(text, "x");   // -1
    print_result(text, "s");   // 2
    print_result(text, "t");   // [0, 3]

    return 0;
}
