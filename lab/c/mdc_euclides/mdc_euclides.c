#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b);
int mdc2(int a, int b);

int main(){
    printf("%d\n", mdc(18, 12));
    printf("%d\n", mdc2(18, 12));
    return 0;
}

int mdc(int a, int b){
    if (b == 0){
        return a;
    }

    return mdc(b, a % b);
}


int mdc2(int a, int b){
    int temp;

    while (b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}
