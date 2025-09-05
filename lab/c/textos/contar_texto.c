#include <stdio.h>
#include <ctype.h>

void retornar_informacoes_arquivo(const char *arquivo) {
    FILE *file = fopen(arquivo, "r");
    if (!file) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    int caracteres = 0, linhas = 0, palavras = 0;
    int dentro_palavra = 0;
    int c;

    while ((c = fgetc(file)) != EOF) {
        caracteres++;

        if (c == '\n') {
            linhas++;
        }

        if (isspace(c)) {
            if (dentro_palavra) {
                palavras++;
                dentro_palavra = 0;
            }
        } else {
            dentro_palavra = 1;
        }
    }

    if (dentro_palavra) {
        palavras++;
    }

    fclose(file);

    printf("caracteres: %d\n", caracteres);
    printf("linhas: %d\n", linhas);
    printf("palavras: %d\n", palavras);
}

int main() {
    retornar_informacoes_arquivo("/home/debianjv/Documentos/estudos_logica/requirements.txt");
    return 0;
}
