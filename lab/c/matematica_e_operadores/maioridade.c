#include <stdio.h>

const char* maioridade(int idade) {
    if (idade < 0) {
        return "Idade inválida";   // em C não tem throw, só retornamos string
    }
    return idade >= 18 ? "Maior de idade" : "Menor de idade";
}

int main() {
    int lista[] = {0, 5, 17, 18, 20, 99};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("%d: %s\n", lista[i], maioridade(lista[i]));
    }

    return 0;
}
