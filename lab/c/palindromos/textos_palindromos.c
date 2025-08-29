#include <stdio.h>
#include <string.h>

/* -------- utilidades ASCII -------- */
static int is_ascii_alnum(char c) {
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') ||
           (c >= 'A' && c <= 'Z');
}
static char tolower_ascii(char c) {
    return (c >= 'A' && c <= 'Z') ? (char)(c + 32) : c;
}

/* Filtra para apenas [a-z0-9] em minúsculas (ASCII) */
static void filter_ascii_alnum_lower(const char *src, char *dst) {
    size_t j = 0;
    for (size_t i = 0; src[i] != '\0'; i++) {
        char c = src[i];
        if (is_ascii_alnum(c)) {
            c = tolower_ascii(c);
            dst[j++] = c;
        }
    }
    dst[j] = '\0';
}

/* ------------------ 1) "text_is_palinder" ------------------
   Filtra, inverte a string filtrada e compara */
int text_is_palinder(const char *text) {
    /* buffer suficiente para sua entrada; ajuste se precisar */
    char s[4096], r[4096];
    filter_ascii_alnum_lower(text, s);

    size_t n = strlen(s);
    for (size_t i = 0; i < n; i++) r[i] = s[n - 1 - i];
    r[n] = '\0';

    return strcmp(s, r) == 0;  /* 1 = true, 0 = false */
}

/* ------------------ 2) "text_is_palinder2" -----------------
   Versão “universal/ASCII” com loop explícito (equivale à sua 2ª) */
int text_is_palinder2(const char *text) {
    char s[4096];
    filter_ascii_alnum_lower(text, s);

    /* compara com a invertida sem alocar novo buffer (opcional) */
    size_t i = 0, j = strlen(s);
    if (j == 0) return 1;
    j -= 1;
    while (i < j) {
        if (s[i] != s[j]) return 0;
        i++; j--;
    }
    return 1;
}

/* ------------------ 3) "text_is_palinder_fast" -------------
   Dois ponteiros diretamente na string original, pulando não-alfanum */
int text_is_palinder_fast(const char *text) {
    size_t i = 0, j = strlen(text);
    if (j == 0) return 1;
    j -= 1;

    while (i < j) {
        char ci = text[i];
        char cj = text[j];

        /* avança i até achar [a-z0-9] ASCII */
        if (!is_ascii_alnum(ci)) { i++; continue; }
        /* recua j até achar [a-z0-9] ASCII */
        if (!is_ascii_alnum(cj)) { j--; continue; }

        ci = tolower_ascii(ci);
        cj = tolower_ascii(cj);
        if (ci != cj) return 0;

        i++; j--;
    }
    return 1;
}

/* ------------------------- demo ---------------------------- */
int main(void) {
    const char *txt = "Socorram-me subi no onibus em Marrocos!";

    printf("%d\n", text_is_palinder(txt));       // esperado: 1 (true)
    printf("%d\n", text_is_palinder2(txt));      // esperado: 1 (true)
    printf("%d\n", text_is_palinder_fast(txt));  // esperado: 1 (true)
    return 0;
}
