#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

// ==== Protótipos ====
void sequencia(int qtd, const int numeros[]);
void sequencia2(void);
int ler_int(const char *prompt, int *out);
void sequenciaC(int qtd);

// ==== Função principal ====
int main(void) {
    printf("Qual modo deseja usar?\n");
    printf("1 - Parâmetros fixos (sequencia)\n");
    printf("2 - Interativo (sequencia2)\n");
    printf("3 - Interativo Ctônico\n");
    printf("4 - Entrada livre com ENTER vazio\n");

    char opcao[2];
    printf("Escolha (1/2/3/4): ");
    scanf("%1s", opcao);

    if (strcmp(opcao, "1") == 0) {
        int numeros[] = {3, 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 0, 2, 4, 6, 8, 9, 11, 21, 0, 7, 0};
        sequencia(4, numeros);
    } else if (strcmp(opcao, "2") == 0) {
        sequencia2();
    } else if (strcmp(opcao, "3") == 0) {
        int qtd;
        if (ler_int("Quantas sequências? ", &qtd) != 0) return 0;
        sequenciaC(qtd);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}

// ==== Implementações ====

void sequencia(int qtd, const int numeros[]) {
    int cont = 0, i = 0, soma = 0;
    while (cont < qtd) {
        if (numeros[i] == 0) {
            printf("SOMA: %d\n", soma);
            cont++;
            soma = 0;
        } else if (numeros[i] % 2 == 0) {
            soma += numeros[i];
        }
        i++;
    }
}

void sequencia2(void) {
    int sequencia;
    printf("Quantas sequências? ");
    if (scanf("%d", &sequencia) != 1 || sequencia <= 0) {
        printf("Entrada inválida.\n");
        while (getchar() != '\n' && !feof(stdin));
        return;
    }

    int **lista_final = malloc(sequencia * sizeof(int*));
    int *tamanhos     = malloc(sequencia * sizeof(int));
    if (!lista_final || !tamanhos) {
        printf("Erro de memória!\n");
        free(lista_final);
        free(tamanhos);
        return;
    }

    int cont = 0;
    while (cont < sequencia) {
        int *lista_inicial = NULL;
        int tamanho = 0, numero;

        printf("\n--- Sequência %d ---\n", cont + 1);
        while (1) {
            printf("Digite um número: [0 encerra a sequência %d] ", cont + 1);
            if (scanf("%d", &numero) != 1) {
                printf("DIGITE APENAS NÚMEROS INTEIROS\n");
                while (getchar() != '\n' && !feof(stdin));
                continue;
            }
            if (numero == 0) break;

            int *temp = realloc(lista_inicial, (tamanho + 1) * sizeof(int));
            if (!temp) {
                printf("Erro de memória!\n");
                free(lista_inicial);
                for (int k = 0; k < cont; k++) free(lista_final[k]);
                free(lista_final);
                free(tamanhos);
                return;
            }
            lista_inicial = temp;
            lista_inicial[tamanho++] = numero;
        }

        lista_final[cont] = lista_inicial;
        tamanhos[cont] = tamanho;
        cont++;
    }

    for (int i = 0; i < sequencia; i++) {
        int soma = 0;
        for (int j = 0; j < tamanhos[i]; j++) {
            if (lista_final[i][j] % 2 == 0) soma += lista_final[i][j];
        }
        printf("Sequência %d - SOMA dos pares: %d\n", i + 1, soma);
    }

    for (int i = 0; i < sequencia; i++) free(lista_final[i]);
    free(lista_final);
    free(tamanhos);
}

int ler_int(const char *prompt, int *out) {
    char buf[128];
    for (;;) {
        if (prompt) fputs(prompt, stdout);
        if (!fgets(buf, sizeof buf, stdin)) return -1;

        buf[strcspn(buf, "\n")] = '\0';

        errno = 0;
        char *end;
        long v = strtol(buf, &end, 10);

        if (buf[0] == '\0' || *end != '\0' || errno == ERANGE || v < INT_MIN || v > INT_MAX) {
            puts("DIGITE APENAS NÚMEROS INTEIROS");
            continue;
        }
        *out = (int)v;
        return 0;
    }
}

void sequenciaC(int qtd) {
    if (qtd <= 0) {
        puts("Quantidade de sequências inválida.");
        return;
    }

    int *somas = calloc(qtd, sizeof(int));
    if (!somas) {
        puts("Erro de memória.");
        return;
    }

    for (int i = 0; i < qtd; ++i) {
        printf("\n--- Sequência %d ---\n", i + 1);
        for (;;) {
            int n;
            if (ler_int("Digite um número: [0 encerra] ", &n) != 0) {
                puts("Entrada encerrada.");
                free(somas);
                return;
            }
            if (n == 0) break;
            if ((n & 1) == 0) somas[i] += n;
        }
    }

    for (int i = 0; i < qtd; ++i) {
        printf("Sequência %d - SOMA dos pares: %d\n", i + 1, somas[i]);
    }

    free(somas);
}
