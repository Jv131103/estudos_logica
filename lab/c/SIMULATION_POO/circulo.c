#include <stdio.h>

typedef struct{
    int raio;
} Circulo;


double area(Circulo c, double pi){
    return pi * (c.raio * c.raio);
}

double perimetro(Circulo c, double pi){
    return 2 * pi * c.raio;
}

int main(){
    double pi = 3.141;

    Circulo circ;
    circ.raio = 3;

    printf("Área = %.2f, Perímetro = %.2f\n", area(circ, pi), perimetro(circ, pi));

    return 0;
}
