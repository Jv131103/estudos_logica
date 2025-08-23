#include <stdio.h>


int calcular_expressao1(int x, int y, int z){
    return x + y * z;
}

int calcular_expressao2(int x, int y, int z){
    return (x + y) * z;
}

int verificar_se_expressao_e_verdadeira(int x, int y, int z){
    if ((x > y) && (y < z)){
        return 1;
    }
    return 0;
}

int main(){
    int x, y, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Digite o valor de z: ");
    scanf("%d", &z);

    printf("%d\n", calcular_expressao1(x, y, z));
    printf("%d\n", calcular_expressao2(x, y, z));
    printf("%d\n", verificar_se_expressao_e_verdadeira(x, y, z));

    return 0;
}
