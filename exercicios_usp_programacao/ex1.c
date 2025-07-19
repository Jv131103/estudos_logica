#include <stdio.h>

int retornar_quadrados(int n){
	return n * n;
}

int main(){
	int valor, quadrado;

	printf("Digite um valor: ");
	scanf("%d", &valor);

	while (valor != 0){
		quadrado = retornar_quadrados(valor);
		printf("%d ao quadrado é igual a %d\n", valor, quadrado);
		printf("Digite um valor: ");
        	scanf("%d", &valor);
	}
}
