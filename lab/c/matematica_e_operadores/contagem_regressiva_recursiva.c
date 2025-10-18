#include <stdio.h>

int contagem_recursiva(int n) {
    if (n == 1) {
        printf("%d\n", n);
        return n;
    }
    printf("%d ", n);
    return n - contagem_recursiva(n - 1);
}

void contagem_recursiva2(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    contagem_recursiva(n - 1);
}

int main(void) {
    contagem_recursiva(5);
    contagem_recursiva2(5);
    return 0;
}
