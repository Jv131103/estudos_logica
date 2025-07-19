#include <stdio.h>


void retornar_binario(int numero);

int main(){
    retornar_binario(12);
    return 0;
}

void retornar_binario(int numero){

    if (numero == 0){
        printf("0\n");
        return;
    }

    int qtd_bits = 0;
    int temp, resto;
    int acumuladora = numero;

    //Contando a qtd de bits que irá retornar
    while (acumuladora != 0){
        acumuladora /= 2; // Quociente
        qtd_bits ++; // qtd de bits
    }

    // Pegando os binários
    int i = 0;
    int resultado[qtd_bits];
    while (numero != 0){
        temp = numero % 2; // Temporária que armazenará o resto
        resto = temp;  // O nosso resto
        numero /= 2; // Quociente
        // Adicionando ao array para simplificar a inversão dos restos
        resultado[i] = resto;
        i++;
    }

    for (int i=qtd_bits-1; i > -1; i--){
        printf("%d", resultado[i]);
    }
    printf("\n");
}
