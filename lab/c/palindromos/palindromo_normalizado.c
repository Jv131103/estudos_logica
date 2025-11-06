#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *remover_acentos(char *s) {
    static const char *acentos   =
        "áàãâäéèêëíìîïóòõôöúùûüçÁÀÃÂÄÉÈÊËÍÌÎÏÓÒÕÔÖÚÙÛÜÇ";
    static const char *sem_acent =
        "aaaaaeeeeiiiiooooouuuucAAAAAEEEEIIIIOOOOOUUUUC";

    for (char *p = s; *p; p++) {
        char *pos = strchr(acentos, *p);
        if (pos) *p = sem_acent[pos - acentos];
    }
    return s;
}

int palinder(const char *txt) {
    static char buf[256];
    strncpy(buf, txt, sizeof(buf));
    buf[255] = '\0';

    // remove acentos, trim, lower
    remover_acentos(buf);
    for (char *p = buf; *p; p++) *p = tolower(*p);

    int len = strlen(buf);
    for (int i = 0; i < len / 2; i++) {
        if (buf[i] != buf[len - 1 - i]) return 0;
    }
    return 1;
}

int main(void) {
    printf("%d\n", palinder("abá"));   // 1
    printf("%d\n", palinder("ovo"));   // 1
    printf("%d\n", palinder("teste")); // 0
    return 0;
}
