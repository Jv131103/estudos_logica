#include <stdio.h>


void soma_de_dois_numeros(int m, int n);


int main(){
    soma_de_dois_numeros(10, 10);
    return 0;
}

void soma_de_dois_numeros(int m, int n){
    int maior = 0;
    int maiorx = 0;
    int maiory = 0;

    for (int x=0; x < m; x++){
        for (int y=0; y < n; y++){
            int calculo = x * y - x * x + y;
            if (calculo > maior){
                maior = calculo;
                maiorx = x;
                maiory = y;
            }
        }
    }

    printf("%d, %d, %d\n", maiorx, maiory, maior);
}
