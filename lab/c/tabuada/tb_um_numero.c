#include <stdio.h>


void tabuada_de_um_numero(int numero, int limite);
void tabuada_de_um_numero2(int numero, int limite);

int main(){
    int numero;

    scanf("%d", &numero);
    tabuada_de_um_numero(numero, 10);
    printf("\n");
    scanf("%d", &numero);
    tabuada_de_um_numero2(numero, 10);

    return 0;
}


void tabuada_de_um_numero(int numero, int limite){
    for (int valor=1; valor <= limite; valor++){
        printf("%d x %d = %d\n", numero, valor, numero*valor);
    }
}


void tabuada_de_um_numero2(int numero, int limite){
    int valor = 1;

    while (valor <= limite){
        printf("%d x %d = %d\n", numero, valor, numero*valor);
        valor++;
    }
}
