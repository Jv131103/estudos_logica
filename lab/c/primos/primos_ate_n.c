#include <stdio.h>
#include <math.h>


int eh_primo(int n);
void primos_ate(int n);


int main(){
    primos_ate(10);
}


int eh_primo(int n){
    if (n < 2){
        return 0;
    }

    int raiz = (int) pow(n, 0.5); // raiz quadrada truncada

    for (int x=2; x < raiz + 1; x++){
        if (n % x == 0){
            return 0;
        }
    }
    return 1;
}


void primos_ate(int n){
    for (int divisor=2; divisor <= n; divisor++){
        if (eh_primo(divisor)){
            printf("%d ", divisor);
        }
    }
    printf("\n");
}
