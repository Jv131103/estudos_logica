#include <stdio.h>

const char* classificar_numero(float numero) {
    if (numero == 0)
        return "Zero";
    else if (numero > 0)
        return "Positivo";
    else
        return "Negativo";
}

int main(void) {
    float numeros[] = {-8, 0, 10, -3.14, 2.7};
    int qtd = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < qtd; i++) {
        printf("%.2f: %s\n", numeros[i], classificar_numero(numeros[i]));
    }

    return 0;
}
