#include <stdio.h>


double serie_harmonica(int sinfonia);

int main(){
    printf("%f\n", serie_harmonica(5));
}

double serie_harmonica(int sinfonia){
    double soma = 1.0;

    for (int i=2; i <= sinfonia; i++){
        soma += 1.0/i;
    }

    return soma;
}
