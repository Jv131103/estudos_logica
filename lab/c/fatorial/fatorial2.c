#include <stdio.h>

void fatorial(int n);


int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    fatorial(n);
    return 0;
}

void fatorial(int n){
    int resultado = 1;
    for (int i = n; i > 1; i--){
        resultado *= i;
        printf("%d x ", i);
    }
    printf("1 = %d\n", resultado);
}
