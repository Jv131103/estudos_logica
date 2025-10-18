#include <stdio.h>
#include <stdlib.h> // para abs()

int soma_recursiva(int n) {
    n = abs(n); // valor absoluto
    if (n == 0)
        return 0;
    return n + soma_recursiva(n - 1);
}

int main(void) {
    printf("%d\n", soma_recursiva(5));   // 15
    printf("%d\n", soma_recursiva(-5));  // 15
    return 0;
}
