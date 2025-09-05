#include <stdio.h>
#include <math.h>


int quadrado(int n);
int quadrado2(int n);

int main(){
    int n;
    scanf("%d", &n);

    printf("%d\n",quadrado(n));
    printf("%d\n",quadrado2(n));

    return 0;
}

int quadrado(int n){
    return pow(n, 2);
}

int quadrado2(int n){
    return n * n;
}
