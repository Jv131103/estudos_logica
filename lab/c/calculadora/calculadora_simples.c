#include <stdio.h>
#include <stdlib.h>

// Funções básicas
double soma(double x, double y) {
    return x + y;
}

double subtracao(double x, double y) {
    return x - y;
}

double multiplicacao(double x, double y) {
    return x * y;
}

double divisao(double x, double y, char type) {
    if (y == 0) {
        printf("Erro: divisão por zero\n");
        return 0;
    }
    switch (type) {
        case '/':
            return x / y;
        case '%':   // resto só faz sentido com inteiros
            return (int)x % (int)y;
        default:
            printf("Operador inválido!\n");
            return 0;
    }
}

// Função calculadora
void calculadora(double x, char op, double y) {
    double resposta;

    switch (op) {
        case '+':
            resposta = soma(x, y);
            break;
        case '-':
            resposta = subtracao(x, y);
            break;
        case '*':
            resposta = multiplicacao(x, y);
            break;
        case '/':
            resposta = divisao(x, y, '/');
            break;
        case '%':
            resposta = divisao(x, y, '%');
            break;
        default:
            printf("Tipo inválido: operador precisa ser (+, -, *, /, %)\n");
            return;
    }

    printf("%.2f %c %.2f = %.2f\n", x, op, y, resposta);
}

// Programa principal
int main() {
    double n1, n2;
    char op;

    printf("================================================================\n");
    while (1) {
        printf("Digite a operacao (ex: 10 + 5), ou CTRL+C para sair:\n");

        if (scanf("%lf %c %lf", &n1, &op, &n2) != 3) {
            printf("Entrada inválida\n");
            // limpa buffer
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        printf("----------------------------------------------------------------\n");
        calculadora(n1, op, n2);
        printf("================================================================\n");
    }

    return 0;
}
