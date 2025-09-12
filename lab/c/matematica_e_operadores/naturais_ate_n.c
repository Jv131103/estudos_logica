#include <stdio.h>


int main(){
    int limite = 10;

    int array[limite];
    int i = 0;
    for (int value=1; value <= limite; value++){
        array[i] = value;
        i++;
    }

    printf("[ ");
    for (int i=0; i < limite; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
}
