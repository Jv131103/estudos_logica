#include <stdio.h>


int retornar_soma_linear(int lista[], int tamanho);
int retornar_soma_pa(int lista[], int tamanho);
int soma_recursiva(int lista[], int tamanho, int i);


int main(){
    int lista[] = {10, 20, 30, 40};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    printf("Algoritmo Linear: %d\n", retornar_soma_linear(lista, tamanho));
    printf("Algoritmo de Gauss: %d\n", retornar_soma_pa(lista, tamanho));
    printf("Algoritmo recursivo linear: %d\n", soma_recursiva(lista, tamanho, 0));
    return 0;
}

int retornar_soma_linear(int lista[], int tamanho){
    int soma = 0;

    for (int i=0; i < tamanho; i++){
        soma += lista[i];
    }

    return soma;
}

int retornar_soma_pa(int lista[], int tamanho){
    return (tamanho / 2) * (lista[0] + lista[tamanho - 1]);
}

int soma_recursiva(int lista[], int tamanho, int i){
    if (i == tamanho){
        return 0;
    }
    return lista[i] + soma_recursiva(lista, tamanho, i + 1);
}
