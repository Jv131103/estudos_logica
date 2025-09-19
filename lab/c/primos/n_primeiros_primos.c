#include <stdio.h>
#include <math.h>


int eh_primo(int n);
void n_primeiros_primos(int n);


int main(){
    n_primeiros_primos(10);
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


void n_primeiros_primos(int n){
    int contador = 0;

    int candidato = 2;

    while (contador < n){
        if (eh_primo(candidato)){
            printf("%d ", candidato);
            contador ++;
        }
        candidato ++;
    }
    printf("\n");
}
