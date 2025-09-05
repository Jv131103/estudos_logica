#include <stdio.h>


int sucessor_e_antecessor(int numero){
    int sucessor = numero + 1;
    int antecessor = numero - 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
}

int main(){
    int numero;
    scanf("%d", &numero);

    sucessor_e_antecessor(numero);
}
