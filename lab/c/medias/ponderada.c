#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

double pond() {
    double soma_pesos = 0.0;
    double soma_produtos = 0.0;
    char entrada[50];

    while (1) {
        printf("Nota (ou FIM): ");
        scanf("%s", entrada);

        // Converter para maiúsculas
        for (int i = 0; entrada[i]; i++) {
            entrada[i] = toupper(entrada[i]);
        }

        // Verifica saída
        if (strcmp(entrada, "FIM") == 0) {
            break;
        }

        // Converte nota
        double nota = atof(entrada);

        printf("Peso: ");
        double peso;
        scanf("%lf", &peso);

        soma_produtos += nota * peso;
        soma_pesos += peso;
    }

    if (soma_pesos == 0.0) {
        printf("❌ Erro: Peso total zero — média impossível.\n");
        exit(1); // mesmo efeito do raise ValueError
    }

    return soma_produtos / soma_pesos;
}

int main() {
    double resultado = pond();
    printf("Média ponderada = %.4lf\n", resultado);
    return 0;
}
