#include <stdio.h>


const char* tipo_triangulo(int a, int b, int c);

int main(){
    printf("%s\n", tipo_triangulo(5, 5, 5));  // Equilátero
    printf("%s\n", tipo_triangulo(5, 5, 3));  // Isósceles
    printf("%s\n", tipo_triangulo(5, 3, 5));  // Isósceles
    printf("%s\n", tipo_triangulo(3, 5, 5));  // Isósceles
    printf("%s\n", tipo_triangulo(3, 4, 5));  // Escaleno
    return 0;
}

const char* tipo_triangulo(int a, int b, int c){
    if (a == b == c){
        return "Equilátero";
    } else if (a == b || b == c || a == c){
        return "Isósceles";
    }
    else{
        return "Escaleno";
    }
}
