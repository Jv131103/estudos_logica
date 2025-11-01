// soma.c
#include <stdio.h>
#include <stdlib.h>  // abort
#include <assert.h>  // assert

// "lambda" em C = função normal
int soma(int x, int y) { return x + y; }

int main(void) {
    // opcional: usar um ponteiro de função, como se fosse um "lambda" nomeado
    int (*soma_fn)(int, int) = soma;

    // casos: {x, y, esperado}
    static const int casos[][3] = {
        {  1,  1,  2 },
        {  4,  5,  9 },
        { 10,  5, 15 },
        { -1,  1,  0 },
        { -2, -2, -4 },
        {  3,  7, 10 },
    };
    const size_t n = sizeof(casos) / sizeof(casos[0]);

    for (size_t i = 0; i < n; ++i) {
        int x = casos[i][0];
        int y = casos[i][1];
        int esperado = casos[i][2];

        int saida = soma_fn(x, y);
        printf("%d\n", saida);

        // assert padrão (sem mensagem customizada)
        assert(saida == esperado);

        // Se quiser mensagem customizada em vez de assert:
        // if (saida != esperado) {
        //     fprintf(stderr, "SOMA INVÁLIDA: %d + %d = %d; sua saída foi: %d\n",
        //             x, y, x + y, saida);
        //     abort(); // ou return 1;
        // }
    }

    return 0;
}
