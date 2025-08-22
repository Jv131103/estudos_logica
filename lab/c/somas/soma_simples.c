#include <stdio.h>

// Versão 1
int soma1(int x, int y){
    return x + y;
}

int soma2(int x, int y){
    int soma = x + y;
    return soma;
}


int main(){
    int x, y, soma;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    // Versão 3
    soma = x + y;
    printf("Soma: %d\n", soma);

    // Chamando outras versões
    soma = soma1(x, y);
    printf("Soma: %d\n", soma);

    printf("Soma: %d\n", soma2(x, y));
}
