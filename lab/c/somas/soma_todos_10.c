#include <stdio.h>

int soma_10_linear();

int soma_10_gaus();

int main(){
    int linear, gaus_form;

    linear = soma_10_linear();
    printf("Soma Linear: %d\n", linear);

    gaus_form = soma_10_gaus();
    printf("Soma Fórmula de Gaus: %d\n", gaus_form);

}

int soma_10_linear(){
    int soma;

    for (int i=0; i <= 10; i++){
        soma += i;
    }

    return soma;
}

int soma_10_gaus(){
    int soma = (10 / 2) * (0 + 11);
    return soma;
}
