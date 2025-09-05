#include <stdio.h>


float celcius_to_farenheit(float celcius){
    return celcius * 9/5 + 32;
}

int main(){

    float c;
    scanf("%f", &c);

    printf("%.2f\n", celcius_to_farenheit(c));

    return 0;
}
