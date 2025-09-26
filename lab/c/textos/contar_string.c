#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALAVRAS 100
#define MAX_LEN 50

typedef struct {
    char palavra[MAX_LEN];
    int contagem;
} PalavraFreq;

int main() {
    char texto[] = "hoje e dia de estudar estudar estudar python python";
    char *token;
    PalavraFreq freq[MAX_PALAVRAS];
    int total = 0;

    // Tokenizar por espaço
    token = strtok(texto, " ");
    while (token != NULL) {
        // Normalizar para minúsculo
        for (int i = 0; token[i]; i++)
            token[i] = tolower(token[i]);

        // Procurar se já existe
        int encontrado = 0;
        for (int i = 0; i < total; i++) {
            if (strcmp(freq[i].palavra, token) == 0) {
                freq[i].contagem++;
                encontrado = 1;
                break;
            }
        }
        // Se não existe, adiciona
        if (!encontrado) {
            strcpy(freq[total].palavra, token);
            freq[total].contagem = 1;
            total++;
        }

        token = strtok(NULL, " ");
    }

    // Ordenar por contagem (bubble sort simples)
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (freq[j].contagem > freq[i].contagem) {
                PalavraFreq temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;
            }
        }
    }

    // Exibir
    for (int i = 0; i < total; i++) {
        printf("%s: %d\n", freq[i].palavra, freq[i].contagem);
    }

    return 0;
}
