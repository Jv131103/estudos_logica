#include <stdio.h>

const char* par_ou_impar(int numero){
    if (numero % 2 == 0){
        return "PAR";
    }
    else{
        return "ÍMPAR";
    }
}

const char* par_ou_impar2(int numero){
    return (numero % 2 == 0) ? "PAR" : "IMPAR";  // Ternário em C
}

int main(){

    printf("%s\n", par_ou_impar(2));
    printf("%s\n", par_ou_impar(3));
    printf("%s\n", par_ou_impar(-4));
    printf("%s\n", par_ou_impar2(2));
    printf("%s\n", par_ou_impar2(3));
    printf("%s\n", par_ou_impar2(-4));

    return 0;
}
