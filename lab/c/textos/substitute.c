#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>


char* my_replace1(const char *string, const char *from, const char *to);
char* my_replace2(const char *string, const char *from, const char *to);
char* my_replace3(const char *string, const char *palavra, const char *troca, int ignore_case);


int main(void) {
    char *r;

    r = my_replace1("Eu gosto de Python", "Python", "C");
    printf("%s\n", r); free(r);

    r = my_replace2("Eu gosto de Python", "Python", "C");
    printf("%s\n", r); free(r);

    r = my_replace3("Eu gosto de Python", "Python", "C", 0);
    printf("%s\n\n", r); free(r);

    r = my_replace1("Eu", "Eu", "Salve Cachorro");
    printf("%s\n", r); free(r);

    r = my_replace2("Eu", "Eu", "Salve Cachorro");
    printf("%s\n", r); free(r);

    r = my_replace3("Eu", "Eu", "Salve Cachorro", 0);
    printf("%s\n\n", r); free(r);

    r = my_replace1("Droga, errei aqui,", ",", " ");
    printf("%s\n", r); free(r);

    r = my_replace2("Droga, errei aqui,", ",", " ");
    printf("%s\n", r); free(r);

    r = my_replace3("Droga, errei aqui,", ",", " ", 0);
    printf("%s\n", r); free(r);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// retorna string ALLOCADA com todas as ocorrências de 'from' trocadas por 'to'
char* my_replace1(const char *string, const char *from, const char *to) {
    if (!from || !*from) { // evita loop se from for vazio
        return strdup(string);
    }
    size_t lenS = strlen(string), lenF = strlen(from), lenT = strlen(to);

    // 1) conta ocorrências
    size_t count = 0;
    for (const char *p = string; (p = strstr(p, from)); p += lenF) count++;

    // 2) aloca resultado
    size_t lenOut = lenS + count * (lenT - lenF) + 1;
    char *out = (char*)malloc(lenOut);
    if (!out) return NULL;

    // 3) monta saída
    const char *src = string;
    char *dst = out;
    const char *hit;
    while ((hit = strstr(src, from))) {
        size_t n = (size_t)(hit - src);
        memcpy(dst, src, n);
        dst += n;
        memcpy(dst, to, lenT);
        dst += lenT;
        src = hit + lenF;
    }
    // copia resto
    strcpy(dst, src);
    return out;
}

char* my_replace2(const char *string, const char *from, const char *to) {
    return my_replace1(string, from, to); // reaproveita a 1ª (mesmo efeito)
}

char* my_replace3(const char *string, const char *palavra, const char *troca, int ignore_case) {
    if (!palavra || !*palavra) return strdup(string);

    // compila regex escapando 'palavra'
    // Obs.: para simplicidade, usamos a própria 'palavra' literal (sem metacaracteres).
    // Se precisar escapar totalmente, implemente um escapador de regex POSIX.
    regex_t re;
    int cflags = REG_EXTENDED;
    if (ignore_case) cflags |= REG_ICASE;
    if (regcomp(&re, palavra, cflags) != 0) {
        return strdup(string);
    }

    size_t cap = strlen(string) + 1;
    char *out = (char*)malloc(cap);
    if (!out) { regfree(&re); return NULL; }
    out[0] = '\0';

    const char *cursor = string;
    regmatch_t m;

    while (regexec(&re, cursor, 1, &m, 0) == 0) {
        size_t prefix_len = (size_t)m.rm_so;
        size_t match_len  = (size_t)(m.rm_eo - m.rm_so);

        // garante espaço
        size_t need = strlen(out) + prefix_len + strlen(troca) + 1;
        if (need > cap) {
            cap = need * 2;
            out = (char*)realloc(out, cap);
        }

        // concat prefixo + troca
        strncat(out, cursor, prefix_len);
        strcat(out, troca);

        cursor += m.rm_eo; // avança após o match
    }

    // sobra (sufixo)
    size_t need = strlen(out) + strlen(cursor) + 1;
    if (need > cap) {
        cap = need;
        out = (char*)realloc(out, cap);
    }
    strcat(out, cursor);

    regfree(&re);
    return out;
}
