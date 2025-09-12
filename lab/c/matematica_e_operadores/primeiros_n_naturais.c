#include <stdio.h>


int main(){
    int n = 10;

    int array[n];
    int i = 0;
    for (int value=1; value <= n; value++){
        array[i] = value;
        i++;
    }

    printf("[ ");
    for (int i=0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
}
