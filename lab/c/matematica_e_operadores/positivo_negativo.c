#include <stdio.h>


void positive_or_negative(int array[], int tamanho){
    for (int x=0; x < tamanho; x++){
        if (array[x] == 0){
            printf("%d: Zero\n", array[x]);
        } else if (array[x] > 0){
            printf("%d: Positivo\n", array[x]);
        } else {
            printf("%d: Negativo\n", array[x]);
        }
    }
}


int main(){
    //Testes
    int array[5] = {-8, 0, 10, -3.14, 2.7};
    positive_or_negative(array, 5);
}
