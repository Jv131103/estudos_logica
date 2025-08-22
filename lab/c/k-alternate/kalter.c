#include <stdio.h>
#include <stdbool.h>

int paridade(int x) {
    return x % 2;
}

bool k_alternante(int numeros[], int n, int k) {
    // 1) checar divisibilidade (ou se é 1 bloco só)
    if (n % k != 0 && k != n) {
        return false;
    }

    int paridadesBlocos[n / k];
    int blocoIndex = 0;

    // 2) dividir em blocos de tamanho k
    for (int i = 0; i < n; i += k) {
        int p = paridade(numeros[i]);
        // checar uniformidade dentro do bloco
        for (int j = 0; j < k && i + j < n; j++) {
            if (paridade(numeros[i + j]) != p) {
                return false;
            }
        }
        paridadesBlocos[blocoIndex++] = p;
    }

    // 3) checar alternância entre blocos
    for (int i = 1; i < blocoIndex; i++) {
        if (paridadesBlocos[i] == paridadesBlocos[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int seq1[] = {1, 3, 6, 8, 9, 11, 2, 4, 1, 7, 6, 8};
    int seq2[] = {1, 3, 5};
    int seq3[] = {1, 3, 5, 7, 9, 11};
    int seq4[] = {2, 4, 6, 8};

    printf("%d\n", k_alternante(seq1, 12, 2)); // 1 (true)
    printf("%d\n", k_alternante(seq2, 3, 3));  // 1 (true)
    printf("%d\n", k_alternante(seq3, 6, 2));  // 0 (false)
    printf("%d\n", k_alternante(seq4, 4, 2));  // 0 (false)

    return 0;
}
