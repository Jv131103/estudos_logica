#include <stdio.h>
#include <math.h>
#include <string.h>  // no topo do arquivo

int retornar_decimal(char binario[]);

int main(){
    printf("%d", retornar_decimal("10011"));
}

int retornar_decimal(char binario[]){
    int tamanho = strlen(binario) - 1;
    int soma_decimal = 0;
    int indice = 0;

    for (int potencia=tamanho; potencia > -1; potencia--){
        int bit = binario[indice] - '0'; // converte '1' ou '0' para 1 ou 0
        soma_decimal += bit * (int)pow(2, potencia);
        indice ++;
    }

    return soma_decimal;
}
