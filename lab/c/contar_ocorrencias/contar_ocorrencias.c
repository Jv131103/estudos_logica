#include <stdio.h>

int contar_ocorrencias_recursivo(int lista[], int tamanho, int valor, int i);
int contar_ocorrencias_linear(int lista[], int tamanho, int valor);

int main() {
    int arr[] = {2, 3, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    int resultado = contar_ocorrencias_recursivo(arr, tamanho, 3, 0);
    printf("%d\n", resultado); // Saída esperada: 2

    resultado = contar_ocorrencias_linear(arr, tamanho, 3);
    printf("%d\n", resultado); // Saída esperada: 2
    return 0;
}

int contar_ocorrencias_recursivo(int lista[], int tamanho, int valor, int i) {
    if (i == tamanho) {
        return 0;
    }

    if (lista[i] == valor) {
        return 1 + contar_ocorrencias_recursivo(lista, tamanho, valor, i + 1);
    } else {
        return contar_ocorrencias_recursivo(lista, tamanho, valor, i + 1);
    }
}


int contar_ocorrencias_linear(int lista[], int tamanho, int valor){
    int contador = 0;
    for (int i=0; i < tamanho; i++){
        if (lista[i] == valor){
            contador ++;
        }
    }
    return contador;
}
