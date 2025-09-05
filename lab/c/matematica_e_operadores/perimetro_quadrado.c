#include <stdio.h>


int perimetro_quadrado(int lado){
    return 4 * lado;
}

int main(){
    int num;
    scanf("%d", &num);

    printf("%d\n", perimetro_quadrado(num));

    return 0;
}
