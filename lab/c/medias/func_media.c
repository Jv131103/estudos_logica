#include <stdio.h>

double media(double nota1, double nota2, double nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

int main(void) {
    printf("%.2f\n", media(6, 8, 9));
    return 0;
}
