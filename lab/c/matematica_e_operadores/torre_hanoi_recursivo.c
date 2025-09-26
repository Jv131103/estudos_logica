#include <stdio.h>

void torreHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mova disco de %c para %c\n", origem, destino);
    } else {
        torreHanoi(n - 1, origem, auxiliar, destino);
        printf("Mova disco de %c para %c\n", origem, destino);
        torreHanoi(n - 1, auxiliar, destino, origem);
    }
}

int main() {
    // Exemplo: 3 discos da torre A para C, usando B como auxiliar
    torreHanoi(3, 'A', 'C', 'B');
    return 0;
}
