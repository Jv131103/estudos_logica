#include <stdio.h>


void primeiros_multiplos(int n, int i, int j);
void primeiros_multiplos2(int n, int i, int j);

int main(){
    int n, i, j;

    printf("Digite o limite: ");
    scanf("%d", &n);

    printf("Digite o primeiro número: ");
    scanf("%d", &i);

    printf("Digite o segundo número: ");
    scanf("%d", &j);

    primeiros_multiplos(n, i, j);
    primeiros_multiplos2(n, i, j);

    return 0;
}

void primeiros_multiplos(int n, int i, int j){
    printf("Primeiros %d múltiplos de %d e %d\n", n, i, j);

    int cont = 0;  // Contador de múltiplos impressos
    int mult = 0;  // Candidato a multiplo de i ou j

    while (cont < n){
        if (mult % i == 0 | mult % j == 0){
            printf("%d\n", mult);
            cont ++;
        }

        mult ++;
    }
}


void primeiros_multiplos2(int n, int i, int j){
    printf("Primeiros %d múltiplos de %d e %d\n", n, i, j);

    // mult_i armazena um múltiplo de i
    // mult_j armazena um
    int mult_i = 0;
    int mult_j = 0;

    for (int k=0; k < n; k++){
        // selecione o menor múltiplo, imprima e passe para o próximo
        if (mult_i == mult_j){
            printf("%d\n", mult_i);
            mult_i = mult_i + i;  // próximo múltiplo de i
            mult_j = mult_j + j;  // próximo múltiplo de j
        } else if (mult_i < mult_j){
            printf("%d\n", mult_i);
            mult_i = mult_i + i;  // próximo múltiplo de i
        } else {
            printf("%d\n", mult_j);
            mult_j = mult_j + j;  // próximo múltiplo de j
        } 
    }
}
