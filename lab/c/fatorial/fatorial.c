#include <stdio.h>

int fatorial_for_linear(int n);
int fatorial_while_linear(int n);
int fatorial_recursivo(int n);

int main(){
    printf("%d\n", fatorial_for_linear(5));
    printf("%d\n", fatorial_while_linear(5));
    printf("%d\n", fatorial_recursivo(5));
    return 0;
}


int fatorial_for_linear(int n){
    int mult = 1;

    for (int i = n; i > 0; i--){
        mult *= i;
    }

    return mult;
}


int fatorial_while_linear(int n){
    int cont = n;
    int mult = 1;

    while (cont > 0){
        mult *= cont;
        cont --;
    }

    return mult;
}


int fatorial_recursivo(int n){
    if (n == 0){
        return 1;
    }

    return n * fatorial_recursivo(n - 1);
}
