#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contagem_de_vogais(const char *texto) {
    const char *vogais = "aeiouAEIOUãẽĩõũáéíóúàèìòùâêîôûÃẼĨÕŨÁÉÍÓÚÀÈÌÒÙÂÊÎÔÛ";
    int contador = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (strchr(vogais, texto[i])) {
            contador++;
        }
    }
    return contador;
}

int main(void) {
    const char *texto = "Programação";
    printf("%d\n", contagem_de_vogais(texto)); // 5
    printf("%d\n", contagem_de_vogais(texto)); // mesmo resultado
    return 0;
}
