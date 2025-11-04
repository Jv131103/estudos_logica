#include <stdio.h>


const char* number_is(int number);

int main(){
    for (int i = -10; i < 11; i++){
        printf("%d = %s\n", i, number_is(i));
        printf("\n");
    }
    return 0;
}

const char* number_is(int number){
    if (number == 0){
        return "Zero";
    } else if (number > 0){
        return "Positive";
    } else {
        return "Negative";
    }
}
