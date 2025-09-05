#include <stdio.h>


int maior_entre_dois(int n1, int n2){
    return (n1 > n2) ? n1:n2;
}

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("%d\n", maior_entre_dois(n1, n2));
}
