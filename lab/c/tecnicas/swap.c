#include <stdio.h>


int main(){
    int a = 5;
    int b = 10;
    printf("Antes %d %d\n", a, b);

    // usando temp
    int temp = a;
    a = b;
    b = temp;
    printf("Depois (com temp): %d %d\n", a, b);

    // swap com XOR
    a = a ^ b;  
    b = a ^ b;  
    a = a ^ b;
    printf("Depois (Ctonic): %d %d\n", a, b);
}
