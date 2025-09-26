#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int soma_digitos(int n) {
    n = abs(n); // Considera o valor absoluto para lidar com números negativos
    if (n < 10) {
        return n;
    } else {
        return (n % 10) + soma_digitos(n / 10);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int resultado = soma_digitos(numero);
    printf("A soma dos dígitos de %d é: %d\n", numero, resultado);
    
    return 0;
}
