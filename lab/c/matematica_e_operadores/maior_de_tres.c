#include <stdio.h>


int maior_de_tres(int n1, int n2, int n3){
    if (n1 >= n2 && n1 >= n3){
        return n1;
    } else if (n2 >= n1 && n2 >= n3){
        return n2;
    } else{
        return n3;
    }
}

int main(){
    int testes[5][3] = {{5, 12, 7}, {90, 8, 0}, {10, 20, 30}, {-10, -9, -1}, {-0.22, 0, -1}};

    for (int x=0; x < 5; x++){
        printf("%d\n", maior_de_tres(testes[x][0], testes[x][1], testes[x][2]));
    }
}
