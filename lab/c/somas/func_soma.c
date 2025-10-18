#include <stdio.h>
#include <assert.h>

int soma(int n1, int n2) {
    return n1 + n2;
}

int main(void) {
    // Lista de testes: {n1, n2, esperado}
    int testes[][3] = {
        {2, 2, 4},
        {-3, 2, -1},
        {198, 12, 210},
        {3, 7, 10}
    };

    int total = sizeof(testes) / sizeof(testes[0]);

    for (int i = 0; i < total; i++) {
        int n1 = testes[i][0];
        int n2 = testes[i][1];
        int esperado = testes[i][2];
        int resultado = soma(n1, n2);

        printf("%d + %d = %d\n", n1, n2, resultado);
        assert(resultado == esperado && "Erro: resultado inesperado!");
    }

    printf("✅ Todos os testes passaram!\n");
    return 0;
}
