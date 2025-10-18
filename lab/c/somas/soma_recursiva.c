#include <stdio.h>

int soma_recursiva(int n) {
    if (n == 0)
        return 0;
    return n + soma_recursiva(n - 1);
}

int main(void) {
    printf("%d\n", soma_recursiva(5));
    return 0;
}
