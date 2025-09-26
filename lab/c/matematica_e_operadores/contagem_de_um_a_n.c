#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contagem1(int inicio, int fim, int passo) {
    if (passo <= 0) { printf("Passo invalido\nFIM!\n"); return; }
    for (int i = inicio; i <= fim; i += passo) {
        printf("%d ", i);
    }
    printf("FIM!\n");
}

void contagem2(int inicio, int fim, int passo) {
    if (passo <= 0) { printf("Passo invalido\nFIM!\n"); return; }
    int i;
    for (i = inicio; i <= fim; i += passo) {
        printf("%d ", i);
    }
    printf("FIM!\n");
}

void contagem_for(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
}

void contagem_while(int N) {
    int i = 1;
    while (i <= N) {
        printf("%d ", i);
        i++;
    }
}

void contagem_do_while(int N) {
    int i = 1;
    if (N < 1) { return; }        // evita imprimir nada se N < 1
    do {
        printf("%d ", i);
        i++;
    } while (i <= N);
}

// helper: lowercase in-place
void tolower_str(char *s) {
    for (; *s; s++) *s = (char)tolower((unsigned char)*s);
}

// Versão com if/else (equivalente ao seu contagem_simples)
void contagem_simples(int N, const char *loop) {
    char opt[32];
    snprintf(opt, sizeof(opt), "%s", loop);
    tolower_str(opt);

    if (strcmp(opt, "for") == 0) {
        contagem_for(N);
    } else if (strcmp(opt, "while") == 0) {
        contagem_while(N);
    } else if (strcmp(opt, "do-while") == 0 || strcmp(opt, "dowhile") == 0) {
        contagem_do_while(N);
    } else {
        printf("Loop invalido! Use 'for', 'while' ou 'do-while'.\n");
        printf("FIM!\n");
        return;
    }
    printf("FIM!\n");
}

// Versão “tabela” com ponteiros de função (equivalente ao seu contagem_simples2)
typedef void (*cont_fn)(int);

typedef struct {
    const char *nome;
    cont_fn fn;
} Entry;

void contagem_simples2(int N, const char *loop) {
    Entry table[] = {
        {"for",      contagem_for},
        {"while",    contagem_while},
        {"do-while", contagem_do_while},
        {"dowhile",  contagem_do_while},
    };
    char opt[32];
    snprintf(opt, sizeof(opt), "%s", loop);
    tolower_str(opt);

    int found = 0;
    for (int i = 0; i < (int)(sizeof(table)/sizeof(table[0])); i++) {
        if (strcmp(opt, table[i].nome) == 0) {
            table[i].fn(N);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Loop invalido! Use 'for', 'while' ou 'do-while'.\n");
    }
    printf("FIM!\n");
}

int main(void) {
    // equivalentes de contagem1/2
    contagem1(1, 10, 1);
    contagem2(1, 10, 1);
    printf("\n");

    // equivalentes de contagem_simples
    contagem_simples(5, "for");
    contagem_simples(5, "while");
    contagem_simples(5, "dowhile");
    printf("\n");

    // equivalentes de contagem_simples2 (tabela de funções)
    contagem_simples2(5, "for");
    contagem_simples2(5, "while");
    contagem_simples2(5, "do-while");

    return 0;
}
