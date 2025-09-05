#include <stdio.h>


int par_ou_impar(int numero){
    return numero % 2 == 0;
}


int main(){
    int numero;
    scanf("%d", &numero);

    if (par_ou_impar(numero)){
        printf("Par\n");
    } else{
        printf("Impar\n");
    }
}
