#include <stdio.h>

int ispar(int number){
    return number % 2 == 0;
}

const char* return_par_ou_impar(int number){
    return (ispar(number)) ? "Par" : "Ímpar";
}

int main(){
    printf("********************\n");
    for (int i=0; i <= 10; i++){
        printf("%d is %s\n", i, return_par_ou_impar(i));
        printf("********************\n");
    }
    return 0;
}
