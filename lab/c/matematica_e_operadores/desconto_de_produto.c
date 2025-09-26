#include <stdio.h>

int desconto_produto1(int valor){
    if (valor > 100){
        return valor - (valor * 0.1);
    } else {
        return valor - (valor * 0.05);
    }
}

int desconto_produto2(int valor){
    if (valor > 100){
        return valor * 0.9;  // 10% de desconto
    } else {
        return valor * 0.95;  // 5% de desconto
    }
}

int desconto_produto3(int valor){
    return valor > 100 ? valor * 0.9 : valor * 0.95;
}

int main(){
    int valor;
    printf("Digite o valor do produto: ");
    scanf("%d", &valor);

    int valor_com_desconto1 = desconto_produto1(valor);
    int valor_com_desconto2 = desconto_produto2(valor);
    int valor_com_desconto3 = desconto_produto3(valor);

    printf("Valor com desconto (método 1): %d\n", valor_com_desconto1);
    printf("Valor com desconto (método 2): %d\n", valor_com_desconto2);
    printf("Valor com desconto (método 3): %d\n", valor_com_desconto3);

    return 0;
}
