#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int fatorial(int n);
int permutacao(int n);
int permutacao_parcial(int n, int k);


int main(){
    printf("%d\n", permutacao(4));
    printf("%d\n", permutacao_parcial(5, 3));

    return 0;
}

int fatorial(int n){
    int m = 1;
    for (int i=n; i > 0; i--){
        m *= i;
    }
    return m;
}

int permutacao(int n){
    return fatorial(n);
}

int permutacao_parcial(int n, int k){
    return floor(fatorial(n) / fatorial(n - k));
}
