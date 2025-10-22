#include <stdio.h>

// Função auxiliar para imprimir o vetor
void imprimir(int v[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}


// -------- Versão 1 (usando 2 partes simples) --------
void versao1(int lista[], int n, int k) {
    k = k % n;
    int novo[n];
    int idx = 0;

    // Copia os últimos k
    for (int i = n - k; i < n; i++) {
        novo[idx++] = lista[i];
    }

    // Copia o resto
    for (int i = 0; i < n - k; i++) {
        novo[idx++] = lista[i];
    }

    imprimir(novo, n);
}


// -------- Versão 2 (mesma ideia, mas com vetores separados) --------
void versao2(int lista[], int n, int k) {
    k = k % n;
    int ultimos[k];
    int restantes[n - k];
    int novo[n];
    int i, j;

    // Últimos k elementos
    for (i = 0; i < k; i++) {
        ultimos[i] = lista[n - k + i];
    }

    // Restantes
    for (j = 0; j < n - k; j++) {
        restantes[j] = lista[j];
    }

    // Junta tudo
    for (i = 0; i < k; i++) {
        novo[i] = ultimos[i];
    }
    for (j = 0; j < n - k; j++) {
        novo[k + j] = restantes[j];
    }

    imprimir(novo, n);
}


// -------- Versão 3 (usando índice modular) --------
void versao3(int lista[], int n, int k) {
    k = k % n;
    int novo[n];

    for (int i = 0; i < n; i++) {
        int nova_pos = (i + k) % n;
        novo[nova_pos] = lista[i];
    }

    imprimir(novo, n);
}


// -------- Função principal --------
int main() {
    int lista[] = {1, 2, 3, 4};
    int n = sizeof(lista) / sizeof(lista[0]);

    printf("Versão 1:\n");
    versao1(lista, n, 1);

    printf("\nVersão 2:\n");
    versao2(lista, n, 2);

    printf("\nVersão 3:\n");
    versao3(lista, n, 3);

    return 0;
}
