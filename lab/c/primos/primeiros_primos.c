#include <stdio.h>


void modelo1(int limite);

void modelo2(int limite);

int main(){
	int valor;

	printf("Defina o valor limite para ímpares: ");
	scanf("%d", &valor);

	modelo1(valor);
	printf("++++++++++++++++++++++++++++++\n");

	modelo2(valor);
	printf("\n");

	return 0;
}

void modelo1(int limite){
	int contador = 1;
	int impares = 1;
	while (contador <= limite){
		if (impares % 2 != 0){
			printf("%d\n", impares);
		}
		contador ++;
		impares += 2;
	}
}

void modelo2(int limite){
	int contador = 1;
	int impares = 1;

	while (contador <= limite){
		printf("%d\n", impares);
		contador ++;
		impares += 2;
	}
}
