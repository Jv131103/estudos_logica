#include <stdio.h>


void versao1();


int main(){
    versao1();
    return 0;
}


void versao1(){
    int tam = 8;

    int array[tam];

    for (int i=0; i < tam; i++){
        scanf("%d", &array[i]);
    }

    int maior = array[0];
    int maior_indice = 0;

    for (int i=0; i < tam; i++){
        if (array[i] > maior){
            maior_indice = i;
            maior = array[i];
        }
    }

    printf("max=%d; idx=%d\n", maior, maior_indice);
}
