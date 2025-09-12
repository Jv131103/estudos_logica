#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    int caracteres;
    int linhas;
    int palavras;
} Estatisticas;

Estatisticas analisarArquivo(const char *caminho) {
    FILE *file = fopen(caminho, "r");
    Estatisticas est = {0, 0, 0};

    if (!file) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    int c, in_palavra = 0;
    while ((c = fgetc(file)) != EOF) {
        est.caracteres++;

        if (c == '\n') {
            est.linhas++;
        }

        if (isspace(c)) {
            in_palavra = 0;
        } else if (!in_palavra) {
            in_palavra = 1;
            est.palavras++;
        }
    }

    fclose(file);

    // Se o arquivo não estiver vazio mas não terminar com '\n', ainda há uma linha
    if (est.caracteres > 0 && (c != '\n')) {
        est.linhas++;
    }

    return est;
}

int main() {
    char caminho[256];
    printf("Digite o caminho do arquivo: ");
    scanf("%255s", caminho);

    Estatisticas est = analisarArquivo(caminho);

    printf("Caracteres: %d\n", est.caracteres);
    printf("Linhas: %d\n", est.linhas);
    printf("Palavras: %d\n", est.palavras);

    return 0;
}
