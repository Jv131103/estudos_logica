#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double raiz(int indice, double radicando, int casas_decimais) {
    indice = abs(indice);
    radicando = fabs(radicando);
    double resultado = pow(radicando, 1.0 / indice);
    if (casas_decimais >= 0) {
        double fator = pow(10, casas_decimais);
        resultado = round(resultado * fator) / fator;
    }
    return resultado;
}

double raiz_newton(int n, double x, double precisao, int casas_decimais) {
    double r = x / 2.0;
    while (1) {
        double novo_r = (1.0 / n) * ((n - 1) * r + x / pow(r, n - 1));
        if (fabs(novo_r - r) < precisao) {
            if (casas_decimais >= 0) {
                double fator = pow(10, casas_decimais);
                novo_r = round(novo_r * fator) / fator;
            }
            return novo_r;
        }
        r = novo_r;
    }
}

double raiz_busca_binaria(int n, double x, double precisao, int casas_decimais) {
    double baixo = 0.0, alto = fmax(1.0, x);
    while ((alto - baixo) > precisao) {
        double meio = (baixo + alto) / 2.0;
        if (pow(meio, n) < x)
            baixo = meio;
        else
            alto = meio;
    }
    double resultado = (baixo + alto) / 2.0;
    if (casas_decimais >= 0) {
        double fator = pow(10, casas_decimais);
        resultado = round(resultado * fator) / fator;
    }
    return resultado;
}

int main(void) {
    printf("%.2f\n", raiz(2, 4, -1));      // 2
    printf("%.2f\n", raiz(3, 9, 2));       // 2.08
    printf("%.2f\n", raiz(4, 12, 2));      // 1.86
    printf("\n");
    printf("%.2f\n", raiz_newton(2, 4, 1e-7, 2));   // 2.00
    printf("%.2f\n", raiz_newton(3, 9, 1e-7, 2));   // 2.08
    printf("%.2f\n", raiz_newton(4, 12, 1e-7, 2));  // 1.86
    printf("\n");
    printf("%.2f\n", raiz_busca_binaria(2, 4, 1e-7, 2)); // 2.00
    printf("%.2f\n", raiz_busca_binaria(3, 9, 1e-7, 2)); // 2.08
    return 0;
}
