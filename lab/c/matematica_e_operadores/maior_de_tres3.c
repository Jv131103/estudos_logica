#include <stdio.h>

int maior_de_tres(int n1, int n2, int n3);

int main(){
    int testes[7][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {1, 3, 2},
        {5, 5, 5},
        {5, 5, 3},
        {-1, -5, -3},
        {10, 10, 11}
    };

    for (int i=0; i < 7; i++){
        int n1 = testes[i][0];
        int n2 = testes[i][1];
        int n3 = testes[i][2];

        printf("Maior entre %d, %d, %d = %d\n", n1, n2, n3, maior_de_tres(n1, n2, n3));
    }
    return 0;
}

int maior_de_tres(int n1, int n2, int n3){
    int maior = n1;

    if (n2 > maior){
        maior = n2;
    }

    if (n3 > maior){
        maior = n3;
    }

    return maior;
}
