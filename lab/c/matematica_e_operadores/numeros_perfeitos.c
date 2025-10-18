#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_perfect(int n) {
    if (n <= 1) return false;
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    return soma == n;
}

bool is_perfect_eficient(int n) {
    if (n <= 1) return false;

    int soma = 1; // 1 é divisor de todo número > 1
    int raiz = (int)sqrt(n);

    for (int i = 2; i <= raiz; i++) {
        if (n % i == 0) {
            soma += i;
            if (i != n / i) soma += n / i; // evita duplicar divisores
        }
    }

    return soma == n;
}

int main(void) {
    int numbers[] = {5, 6, 7, 8, 20, 24, 28, 400, 480, 496, 8000, 8128, 33550336};
    int total = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < total; i++) {
        int number = numbers[i];
        if (is_perfect_eficient(number))
            printf("%d: Perfeito\n", number);
        else
            printf("%d: Não perfeito\n", number);
    }

    return 0;
}
