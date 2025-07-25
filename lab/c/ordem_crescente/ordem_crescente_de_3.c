#include <stdio.h>
#include <stdlib.h> // necessário para qsort


void ordem_crescente1(int a, int b, int c);
void ordem_crescente2(int a, int b, int c);
void ordem_crescente3(int a, int b, int c);
void ordem_crescente4(int a, int b, int c);


int main(){
    ordem_crescente1(1, 2, 3);
    ordem_crescente1(1, 3, 2);
    ordem_crescente1(2, 1, 3);
    ordem_crescente1(2, 3, 1);
    ordem_crescente1(3, 2, 1);
    ordem_crescente1(3, 1, 2);
    printf("\n");
    ordem_crescente2(1, 2, 3);
    ordem_crescente2(1, 3, 2);
    ordem_crescente2(2, 1, 3);
    ordem_crescente2(2, 3, 1);
    ordem_crescente2(3, 2, 1);
    ordem_crescente2(3, 1, 2);
    printf("\n");
    ordem_crescente3(1, 2, 3);
    ordem_crescente3(1, 3, 2);
    ordem_crescente3(2, 1, 3);
    ordem_crescente3(2, 3, 1);
    ordem_crescente3(3, 2, 1);
    ordem_crescente3(3, 1, 2);
    printf("\n");
    ordem_crescente4(1, 2, 3);
    ordem_crescente4(1, 3, 2);
    ordem_crescente4(2, 1, 3);
    ordem_crescente4(2, 3, 1);
    ordem_crescente4(3, 2, 1);
    ordem_crescente4(3, 1, 2);
    return 0;
}

void ordem_crescente1(int a, int b, int c){
    int lista[3] = {a, b, c};
    int maior = lista[0];
    int menor = lista[0];
    for (int i=0; i < 3; i++){
        if (lista[i] > maior){
            maior = lista[i];
        }

        if (lista[i] < menor){
            menor = lista[i];
        }
    }
    int meio = (a + b + c) - menor - maior;
    printf("%d %d %d\n", menor, meio, maior);
}

void ordem_crescente2(int a, int b, int c){
    if (a <= b && a <= c){
        if (b <= c){
            printf("%d %d %d\n", a, b, c);
        } else {
            printf("%d %d %d\n", a, c, b);
        }
    } else if (b <= a && b <= c){
        if (a <= c){
            printf("%d %d %d\n", b, a, c);
        } else {
            printf("%d %d %d\n", b, c, a);
        }
    } else{
        if (a <= b){
            printf("%d %d %d\n", c, a, b);
        } else{
            printf("%d %d %d\n", c, b, a);
        }
    }
}

void ordem_crescente3(int a, int b, int c){
    int temp;

    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c){
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d %d %d\n", a, b, c);
}

int compare_ints(const void* a, const void* b){
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    return (arg1 > arg2) - (arg1 < arg2);  // retorna 1, 0 ou -1
}

void ordem_crescente4(int a, int b, int c){
    int lista[3] = {a, b, c};
    qsort(lista, 3, sizeof(int), compare_ints);
    printf("%d %d %d\n", lista[0], lista[1], lista[2]);
}
