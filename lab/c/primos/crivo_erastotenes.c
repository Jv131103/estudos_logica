#include <stdio.h>
#include <math.h>

void crivo_erastotenes(int n) {
    int i, p;

    // Array de flags: 1 = primo, 0 = não primo
    int lista[n + 1];
    for (i = 0; i <= n; i++) {
        lista[i] = 1;  // assume que todos são primos
    }

    // 0 e 1 não são primos
    lista[0] = 0;
    lista[1] = 0;

    int limite = sqrt(n);

    // Peneira
    for (p = 2; p <= limite; p++) {
        if (lista[p] == 1) {
            // marca múltiplos de p
            for (i = p * p; i <= n; i += p) {
                lista[i] = 0;
            }
        }
    }

    // Mostra os primos encontrados
    printf("Primos até %d:\n", n);
    for (i = 2; i <= n; i++) {
        if (lista[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = 30;
    crivo_erastotenes(n);
    return 0;
}
