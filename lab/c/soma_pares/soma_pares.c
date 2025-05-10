#include <stdio.h>
#include <stdlib.h>

int* gerar_lista(int *tamanho);

int main(){

    int tamanho;
    int *lista = gerar_lista(&tamanho);

    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] % 2 == 0) soma += lista[i];
    }

    printf("Soma dos pares: %d\n", soma);

    free(lista); // liberar memória
    return 0;
}

int* gerar_lista(int *tamanho) {
    int limite, n;

    printf("Digite o tamanho da lista: ");
    scanf("%d", &limite);

    int *array = malloc(limite * sizeof(int));
    if (!array) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    for (int i = 0; i < limite; i++) {
        printf("Digite um número: ");
        scanf("%d", &n);
        array[i] = n;
    }

    *tamanho = limite;
    return array;
}
