#include <stdio.h>

int fatorial_for_linear(int n);
int combinacoes(int n, int k);

int main(){
    printf("%d\n", combinacoes(5, 2));
    return 0;
}

int fatorial_for_linear(int n){
    int mult = 1;

    for (int i = n; i > 0; i--){
        mult *= i;
    }

    return mult;
}

int combinacoes(int n, int k){
    return fatorial_for_linear(n) / (
        fatorial_for_linear(k) * fatorial_for_linear(n - k)
    );
}
