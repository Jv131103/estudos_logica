#include <stdio.h>

// -------------------- Funções principais --------------------

double percent(double value, double percent) {
    return value * percent / 100.0;
}

double percent2(double value, double percent) { // 0.5 = 50%
    return value * percent;
}

double discount(double value, double discount) {
    return value - (value * discount / 100.0);
}

double discount_decimal(double value, double discount) {
    return value - (value * discount);
}

double discount_factor(double value, double discount) {
    return value * (1 - discount / 100.0);
}

double discount_chain(double value, int qtd, double discounts[]) {
    for (int i = 0; i < qtd; i++) {
        value *= (1 - discounts[i] / 100.0);
    }
    return value;
}

double increase(double value, double percent) {
    return value + (value * percent / 100.0);
}

double increase_decimal(double value, double discount) {
    return value + (value * discount);
}

double increase_factor(double value, double percent) {
    return value * (1 + percent / 100.0);
}

double increase_chain(double value, int qtd, double percents[]) {
    for (int i = 0; i < qtd; i++) {
        value *= (1 + percents[i] / 100.0);
    }
    return value;
}

// -------------------- Testes --------------------

int main(void) {
    printf("%.2f\n", percent(200, 15));
    printf("%.2f\n", percent2(200, 0.15));
    printf("%.2f\n", discount(250, 20));
    printf("%.2f\n", discount_factor(250, 20));
    printf("%.2f\n", discount_decimal(250, 0.20));
    printf("%.2f\n", increase(200, 10));
    printf("%.2f\n", increase_factor(200, 10));
    printf("%.2f\n", increase_decimal(200, 0.10));

    double descontos[] = {20, 10};
    printf("%.2f\n", discount_chain(100, 2, descontos));

    double aumentos[] = {10, 20};
    printf("%.2f\n", increase_chain(100, 2, aumentos));

    return 0;
}
