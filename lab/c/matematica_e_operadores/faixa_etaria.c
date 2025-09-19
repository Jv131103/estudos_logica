#include <stdio.h>
#include <stdlib.h>

const char* classificacao_etaria(int idade) {
    if (idade < 0) {
        return "Idade inválida!";
    } else if (idade <= 12) {
        return "Criança";
    } else if (idade <= 17) {
        return "Adolescente";
    } else if (idade <= 59) {
        return "Adulto";
    } else {
        return "Idoso";
    }
}

int main() {
    int testes[] = {0, 1, 9, 12, 13, 15, 16, 17, 18, 25, 35, 45, 59, 60, 65, 70, 90};
    int tamanho = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("%d anos -> %s\n", testes[i], classificacao_etaria(testes[i]));
    }

    return 0;
}
