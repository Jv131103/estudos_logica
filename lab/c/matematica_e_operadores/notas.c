#include <stdio.h>
#include <math.h>


void notas(int valor);

int main() {
    int valor;

    scanf("%d", &valor);
    printf("%d\n", valor);
    notas(valor);

    return 0;
}


void notas(int valor){
    int valores[] = {100, 50, 20, 10, 5, 2, 1};
    int qtd, tamanho = sizeof(valores) / sizeof(valores[0]);

    for(int i = 0; i < tamanho; i++){
        qtd = valor / valores[i];
        printf("%d nota(s) de R$ %d,00\n", qtd, valores[i]);
        valor %= valores[i];
    }
}
