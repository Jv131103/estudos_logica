#include <stdio.h>

void maior_e_menor_em_uma_lista();

int main(){
    maior_e_menor_em_uma_lista();
    return 0;
}

void maior_e_menor_em_uma_lista(){
    int limite;
    scanf("%d", &limite);

    int lista[limite];

    
    for (int i = 0; i < limite; i++) {
        scanf("%d", &lista[i]);   // lê cada número inteiro
    }

    int maior = lista[0];
    int menor = lista[0];

    for (int element=0; element < limite; element++){
        if (lista[element] > maior){
            maior = lista[element];
        }

        if (lista[element] < menor){
            menor = lista[element];
        }
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
}
