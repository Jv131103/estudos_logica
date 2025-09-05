#include <stdio.h>


int main(){
    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);

    float media = (n1 + n2 + n3) / 3;
    printf("%.1f\n", media);

    return 0;
}
