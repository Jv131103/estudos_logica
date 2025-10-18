#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tamanho;
    int *array;
    int count;
} Array;

void init(Array *a, int tamanho) {
    a->tamanho = tamanho;
    a->array = malloc(sizeof(int) * tamanho);
    a->count = 0;
}

void add(Array *a, int n) {
    if (a->count >= a->tamanho) {
        printf("Erro: Limite máximo atingido para o array\n");
        return;
    }
    a->array[a->count++] = n;
}

void delete(Array *a) {
    if (a->count <= 0) {
        printf("Erro: Lista vazia para remover\n");
        return;
    }
    a->count--;
}

int sum_array(Array *a) {
    int soma = 0;
    for (int i = 0; i < a->count; i++) {
        soma += a->array[i];
    }
    return soma;
}

void print_array(Array *a) {
    printf("ArrayCustom([");
    for (int i = 0; i < a->count; i++) {
        printf("%d", a->array[i]);
        if (i < a->count - 1) printf(", ");
    }
    printf("])\n");
}

int main(void) {
    Array lista;
    init(&lista, 5);

    // Adiciona de 1 a 5
    for (int i = 1; i <= 5; i++) {
        add(&lista, i);
    }

    printf("Array: ");
    print_array(&lista);
    printf("Soma dos elementos: %d\n", sum_array(&lista));

    // Testando erro (adicionar além do limite)
    add(&lista, 6);

    // Removendo e somando de novo
    delete(&lista);
    printf("Após remover um elemento: ");
    print_array(&lista);
    printf("Soma atual: %d\n", sum_array(&lista));

    free(lista.array);
    return 0;
}
