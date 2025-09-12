#include <stdio.h>
#include <math.h>


int soma_ate_n(int n);
int soma_ate_form_direto(int n);


int main(){
    printf("%d\n", soma_ate_n(10));
    printf("%d\n", soma_ate_form_direto(10));
    return 0;
}


int soma_ate_n(int n){
    if (n <= 0){
        printf("n deve ser maior que 0");
    }

    int soma = 0;

    for (int i=0; i<=n; i++){
        soma += i;
    }

    return soma;
}


int soma_ate_form_direto(int n){
    if (n <= 0){
        printf("n deve ser maior que 0");
    }

    return floor(n * (n + 1) / 2);
}
