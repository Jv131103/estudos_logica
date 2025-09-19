#include <stdio.h>


const char* eh_triangulo(int a, int b, int c){
    if (a < b + c && b < a + c && c < a + b){
        return "Válido";
    }
    return "Inválido";
}

int main(){
    printf("%s\n", eh_triangulo(3, 4, 5));
    printf("%s\n", eh_triangulo(1, 2, 3));
    printf("%s\n", eh_triangulo(10, 2, 7));

    return 0;
}
