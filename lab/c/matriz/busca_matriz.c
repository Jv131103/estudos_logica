#include <stdio.h>
#include <assert.h>

#define LINHAS  2
#define COLUNAS 2

typedef struct {
    int matriz[LINHAS][COLUNAS];
    int valor;
    int esperado;  // 1 = encontrado, 0 = não encontrado
} Teste;

int busca_item_matriz(int matriz[LINHAS][COLUNAS], int valor) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }
    return 0;
}

int main(void) {
    Teste testes[] = {
        { .matriz = {{1,2},{3,4}}, .valor = 3, .esperado = 1 },
        { .matriz = {{1,2},{3,4}}, .valor = 7, .esperado = 0 },
    };

    size_t n = sizeof(testes) / sizeof(testes[0]);
    size_t ok = 0;

    for (size_t i = 0; i < n; i++) {
        int got = busca_item_matriz(testes[i].matriz, testes[i].valor);
        printf("Teste %zu: valor=%d -> %s\n",
               i + 1, testes[i].valor, got ? "Encontrado" : "Não encontrado");

        if (got == testes[i].esperado) ok++;
        else printf("  Esperado: %d, Obtido: %d\n", testes[i].esperado, got);
    }

    printf("\n%zu/%zu testes passaram\n", ok, n);
    return (ok == n) ? 0 : 1;
}
