#include <stdio.h>
#include <math.h>
#include <string.h>


int calculadora_simples(int n1, int n2, char operador[3]);

// Estrutura que guarda um cálculo
typedef struct {
    int n1;
    int n2;
    char op[3];
} Calculo;

int main(){
    Calculo calculos[] = {
        {2, 2, "+"},
        {2, 2, "-"},
        {2, 2, "*"},
        {2, 2, "/"},
        {2, 2, "%"},
        {2, 2, "**"},
    };

    int tamanho = sizeof(calculos) / sizeof(calculos[0]);

    for (int i = 0; i < tamanho; i++) {
        int resultado = calculadora_simples(calculos[i].n1, calculos[i].n2, calculos[i].op);
        printf("%d %s %d = %d\n", calculos[i].n1, calculos[i].op, calculos[i].n2, resultado);
    }

    return 0;
}


int calculadora_simples(int n1, int n2, char operador[3]){
    if (strcmp(operador, "+") == 0) {
        return n1 + n2;
    } else if (strcmp(operador, "-") == 0) {
        return n1 - n2;
    } else if (strcmp(operador, "*") == 0) {
        return n1 * n2;
    } else if (strcmp(operador, "**") == 0) {
        return (int) pow(n1, n2);
    } else if (strcmp(operador, "/") == 0) {
        if (n2 == 0){
            printf("Erro de divisão por 0\n");
            return 0;
        }
        return n1 / n2;
    } else if (strcmp(operador, "%") == 0) {
        if (n2 == 0){
            printf("Erro de divisão por 0\n");
            return 0;
        }
        return n1 % n2;
    } else {
        printf("Operador inválido\n");
        return 0;
    }
}
