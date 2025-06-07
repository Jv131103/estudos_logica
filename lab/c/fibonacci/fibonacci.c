#include <stdio.h>


int fibonacci(int n);
int fibonacci_recursivo(int n);

int main(){
    printf("%d\n", fibonacci(6));
    printf("%d\n", fibonacci_recursivo(6));

    return 0;
}

int fibonacci(int n) {
    int n1 = 0;
    int n2 = 1;
    
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int temp;
    for (int i = 2; i <= n; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }

    return n2;
}

int fibonacci_recursivo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}
