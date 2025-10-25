#include <stdio.h>


int log_n(int n, int b);

int main(){
    printf("%d\n", log_n(16, 2));
    return 0;
}

int log_n(int n, int b){
    int contador = 0;
    int potencia = 1;

    while (potencia * b <= n){
        potencia = potencia * b;
        contador += 1;
    }

    return contador;
}
