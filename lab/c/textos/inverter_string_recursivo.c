#include <stdio.h>
#include <string.h>

void inverter_rec(const char *src, int i, char *dst, int *k){
    int n = (int)strlen(src);
    if (n == 0) { dst[0] = '\0'; return; }
    int ultima = n - i;
    if (ultima <= 0){
        dst[(*k)++] = src[0];
        dst[*k] = '\0';
        return;
    }
    dst[(*k)++] = src[ultima];
    inverter_rec(src, i+1, dst, k);
}

void inverter_string(const char *src, char *dst){
    int k = 0;
    inverter_rec(src, 1, dst, &k);
}

int main(){
    char out[128];
    inverter_string("casa", out);
    printf("%s\n", out); // asac
    inverter_string("", out);
    printf("'%s'\n", out); // ''
    return 0;
}
