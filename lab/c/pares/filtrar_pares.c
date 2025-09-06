#include <stdio.h>


void filtrar_pares(int numero);


int main(){
    int numero;

    scanf("%d", &numero);
    filtrar_pares(numero);

    return 0;
}


void filtrar_pares(int numero){
    int lista[numero];

    for (int i=0; i < numero; i++){
        scanf("%d", &lista[i]);
    }

    for (int i=0; i < numero; i++){
        if (lista[i] % 2 == 0){
            printf("%d ", lista[i]);
        }
    }
    printf("\n");
}
