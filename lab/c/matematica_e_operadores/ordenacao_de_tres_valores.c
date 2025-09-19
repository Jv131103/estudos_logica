#include <stdio.h>


void comparacao_direta(int a, int b, int c);
void ordena_tres_swap(int a, int b, int c);


int main(){
    // Testes rápidos
    comparacao_direta(1, 2, 3);
    comparacao_direta(1, 3, 2);
    comparacao_direta(3, 2, 1);
    comparacao_direta(3, 1, 2);
    comparacao_direta(2, 3, 1);
    comparacao_direta(2, 1, 3);
    comparacao_direta(2, 2, 1);  // casos com empate
    comparacao_direta(1, 1, 2);
    printf("\n");

    ordena_tres_swap(1, 2, 3);
    ordena_tres_swap(1, 3, 2);
    ordena_tres_swap(3, 2, 1);
    ordena_tres_swap(3, 1, 2);
    ordena_tres_swap(2, 3, 1);
    ordena_tres_swap(2, 1, 3);
    ordena_tres_swap(2, 2, 1); // casos com empate
    ordena_tres_swap(1, 1, 2);
    printf("\n");

    return 0;
}

void comparacao_direta(int a, int b, int c){
    // encontra menor sem listas e lidando com empates
    int menor = a;
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }

    // encontra maior sem listas e lidando com empates
    int maior = a;
    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
    
    // o do meio é a soma menos (menor + maior)
    int meio = (a + b + c) - (menor + maior);

    printf("%d %d %d\n", menor, meio, maior);
}


void ordena_tres_swap(int a, int b, int c){
    // versão swap; funciona com empates
    int temp = 0;
    if (a > b){
        temp = b;
        b = a;
        a = temp;
    }
    if (a > c){
        temp = c;
        c = a;
        a = temp;
    }
    if (b > c){
        temp = c;
        c = b;
        b = temp;
    }

    printf("%d %d %d\n", a, b, c);
}
