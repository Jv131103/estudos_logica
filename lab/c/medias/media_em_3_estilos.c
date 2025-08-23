#include <stdio.h>
#include <stdlib.h>


// Procedural
double media(double a, double b, double c);

/* "OO" com struct */
typedef struct {
    double a, b, c;
} Calculadora;
double calculadora_media(const Calculadora *calc);

// "funcional" com reduce
double functional_media(const double *arr, size_t n);

int main(void) {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;

    printf("%.2f\n", media(a, b, c));                // procedural

    Calculadora calc = {a, b, c};                    // "OO"
    printf("%.2f\n", calculadora_media(&calc));

    double vals[3] = {a, b, c};                      // "funcional"
    printf("%.2f\n", functional_media(vals, 3));

    return 0;
}


// Procedural
double media(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

// "Método OO"
double calculadora_media(const Calculadora *calc) {
    return (calc->a + calc->b + calc->c) / 3.0;
}

// Funcional
double add(double x, double y) { return x + y; }

double reduce(const double *arr, size_t n,
              double (*op)(double, double), double init) {
    double acc = init;
    for (size_t i = 0; i < n; ++i) acc = op(acc, arr[i]);
    return acc;
}

double functional_media(const double *arr, size_t n) {
    return reduce(arr, n, add, 0.0) / (double)n;
}
