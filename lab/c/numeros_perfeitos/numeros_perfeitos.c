#include <stdio.h>

int eh_numero_perfeito();

int main(){ 
    printf("%d\n", eh_numero_perfeito());
    return 0;
}


int eh_numero_perfeito(){
    int soma = 0;
    int n;

    printf("DIGITE O VALOR DE N: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++){
        if (n % i == 0){
            soma += i;
        }
    }

    if (soma == n) {
        return 1;
    }

    return 0;
}
