#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// -------------------- frequencia1 --------------------
void frequencia1(int *lista, int n) {
    if (lista == NULL || n == 0) return;

    int *jaFoi = malloc(n * sizeof(int));
    int jaFoiCount = 0;

    for (int i = 0; i < n; i++) {
        bool repetido = false;
        for (int k = 0; k < jaFoiCount; k++) {
            if (lista[i] == jaFoi[k]) {
                repetido = true;
                break;
            }
        }
        if (repetido) continue;

        int cont = 0;
        for (int j = 0; j < n; j++) {
            if (lista[j] == lista[i]) cont++;
        }

        printf("%d aparece %dx\n", lista[i], cont);
        jaFoi[jaFoiCount++] = lista[i];
    }

    free(jaFoi);
}

// -------------------- frequencia2 --------------------
typedef struct {
    int valor;
    int cont;
} Item;

void frequencia2(int *lista, int n) {
    if (lista == NULL || n == 0) return;

    Item *contagem = malloc(n * sizeof(Item));
    int usados = 0;

    for (int i = 0; i < n; i++) {
        bool achou = false;
        for (int k = 0; k < usados; k++) {
            if (contagem[k].valor == lista[i]) {
                contagem[k].cont++;
                achou = true;
                break;
            }
        }
        if (!achou) {
            contagem[usados].valor = lista[i];
            contagem[usados].cont = 1;
            usados++;
        }
    }

    for (int i = 0; i < usados; i++) {
        printf("%d aparece %dx\n", contagem[i].valor, contagem[i].cont);
    }

    free(contagem);
}

// -------------------- MAIN --------------------
int main(void) {
    int lista[] = {2, 3, 2, 5, 3, 2};
    int n = sizeof(lista) / sizeof(lista[0]);

    frequencia1(lista, n);
    printf("\n");
    frequencia2(lista, n);

    return 0;
}
