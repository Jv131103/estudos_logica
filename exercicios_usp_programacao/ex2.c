#include <stdio.h>

int modelo_gaus(int n){
	return (n / 2) * (1 + n);
}

int modelo_linear(int n){
	int contador = 0;
	int soma = 0;
	while (contador <= n){
		soma += contador;
		contador += 1;
	}
	return soma;
}

int main(){
	int valor, soma;

	printf("Digite um número: ");
	scanf("%d", &valor);

	soma = modelo_gaus(valor);
	printf("Modelo de gaus: %d\n", soma);

	soma = modelo_linear(valor);
	printf("Modelo linear: %d\n", soma);

	return 0;
}
