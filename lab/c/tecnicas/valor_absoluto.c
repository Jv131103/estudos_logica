#include <stdio.h>
#include <stdlib.h>


int main(){
    int numero;

    scanf("%d", &numero);
    printf("%d\n", abs(numero));

    scanf("%d", &numero);
    if (numero >= 0){
        printf("%d\n", numero);
    } else {
        printf("%d\n", -numero);
    }

    return 0;
}
