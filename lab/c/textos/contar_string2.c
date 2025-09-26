#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALAVRAS 100
#define MAX_LEN 50

typedef struct {
    char palavra[MAX_LEN];
    int freq;
} PalavraFreq;

void contarPalavras2(char *texto) {
    PalavraFreq lista[MAX_PALAVRAS];
    int tamanho = 0;

    // tokenizar por espaços
    char *token = strtok(texto, " ");
    while (token != NULL) {
        // checa se só tem letras
        int valido = 1;
        for (int i = 0; token[i] != '\0'; i++) {
            if (!isalpha((unsigned char)token[i])) {
                valido = 0;
                break;
            }
        }
        if (valido) {
            // verifica se já existe
            int encontrado = 0;
            for (int i = 0; i < tamanho; i++) {
                if (strcmp(lista[i].palavra, token) == 0) {
                    lista[i].freq++;
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado && tamanho < MAX_PALAVRAS) {
                strcpy(lista[tamanho].palavra, token);
                lista[tamanho].freq = 1;
                tamanho++;
            }
        }
        token = strtok(NULL, " ");
    }

    // selection sort (decrescente por freq)
    for (int i = 0; i < tamanho; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[j].freq > lista[maxIdx].freq) {
                maxIdx = j;
            }
        }
        // swap
        PalavraFreq temp = lista[i];
        lista[i] = lista[maxIdx];
        lista[maxIdx] = temp;
    }

    // imprime resultado
    for (int i = 0; i < tamanho; i++) {
        printf("%s: %d\n", lista[i].palavra, lista[i].freq);
    }
}

int main() {
    char texto[] = "hoje e dia de estudar estudar estudar python python";
    contarPalavras2(texto);
    return 0;
}
