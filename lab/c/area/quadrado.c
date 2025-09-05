#include <stdio.h>


int area_retangulo(int base, int altura);

int main(){
    int base, altura;
    scanf("%d %d", &base, &altura);

    printf("%d\n", area_retangulo(base, altura));

    return 0;
}

int area_retangulo(int base, int altura){
    return base * altura;
}
