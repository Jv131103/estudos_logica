#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Normaliza deslocamento para [0,25]
static int norm_k(int k) {
    k %= 26;
    if (k < 0) k += 26;
    return k;
}

// Versão 1 — usando "alfabeto + index" (aqui: busca linear)
void cesar(const char *texto, int deslocamento, char *saida) {
    const char *A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k = norm_k(deslocamento);

    size_t n = strlen(texto);
    for (size_t i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)texto[i];
        unsigned char up = (unsigned char)toupper(ch);

        // procura no alfabeto
        const char *p = strchr(A, up);
        if (p) {
            int idx = (int)(p - A);
            saida[i] = A[(idx + k) % 26];  // devolve MAIÚSCULA (como no Python)
        } else {
            saida[i] = ch; // mantém não-letras
        }
    }
    saida[n] = '\0';
}

// Versão 2 — ord/chr com char code (mais direta)
void cesar2(const char *texto, int deslocamento, char *saida) {
    int k = norm_k(deslocamento);

    size_t n = strlen(texto);
    for (size_t i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)texto[i];
        unsigned char up = (unsigned char)toupper(ch);

        if (up >= 'A' && up <= 'Z') {
            int pos = up - 'A';
            int novo = (pos + k) % 26;
            saida[i] = (char)('A' + novo); // MAIÚSCULA
        } else {
            saida[i] = ch;
        }
    }
    saida[n] = '\0';
}

// Versão 3 — "maketrans/translate" com tabela de 256 entradas
void cesar3(const char *texto, int deslocamento, char *saida) {
    int k = norm_k(deslocamento);
    unsigned char map[256];
    for (int i = 0; i < 256; i++) map[i] = (unsigned char)i;

    // Monta tabela: A–Z em maiúsculas (como seu translate upper())
    for (int c = 'A'; c <= 'Z'; c++) {
        int pos = c - 'A';
        int novo = (pos + k) % 26;
        map[(unsigned char)c] = (unsigned char)('A' + novo);
    }
    // (Se quiser preservar minúsculas, também preencha 'a'..'z'.)

    // Aplica a tradução
    size_t n = strlen(texto);
    for (size_t i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)texto[i];
        unsigned char up = (unsigned char)toupper(ch);
        if (up >= 'A' && up <= 'Z') {
            saida[i] = (char)map[up];  // sai MAIÚSCULA
        } else {
            saida[i] = (char)ch;
        }
    }
    saida[n] = '\0';
}

int main(void) {
    const char *t1 = "abc";
    const char *t2 = "xyz";
    const char *t3 = "Renato";

    char out[256];

    cesar(t1, 2, out);
    printf("%s\n", out); // CDE
    cesar(t2, 3, out);
    printf("%s\n", out); // ABC
    cesar(t3, 5, out);
    printf("%s\n\n", out); // WJSFYT

    cesar2(t1, 2, out);
    printf("%s\n", out); // CDE
    cesar2(t2, 3, out);
    printf("%s\n", out); // ABC
    cesar2(t3, 5, out);
    printf("%s\n\n", out); // WJSFYT

    cesar3(t1, 2, out);
    printf("%s\n", out); // CDE
    cesar3(t2, 3, out);
    printf("%s\n", out); // ABC
    cesar3(t3, 5, out);
    printf("%s\n", out); // WJSFYT

    return 0;
}
