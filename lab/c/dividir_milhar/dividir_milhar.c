#include <stdio.h>
#include <math.h>


void imprimir_raizes_que_somam_suas_dezenas();
void imprimir_raizes_especiais();


int main(){
    imprimir_raizes_que_somam_suas_dezenas();
    imprimir_raizes_especiais();
    return 0;
}

void imprimir_raizes_que_somam_suas_dezenas(){
    int parte_inteira, resto, raiz;
    for(int i=1000; i < 10000; i++){
        parte_inteira = (int) i / 100;
        resto = (int) i % 100;
        raiz = (int) sqrt(i);
        if (raiz * raiz == i && raiz == parte_inteira + resto){
            printf("%d é um dos números a ser impresso. Raiz: %d\n", i, raiz);
        }
    }
    printf("\n");
}

int soma_dos_dois_digitos_mais_significativos(int numero){
    return (int) numero / 100;
}

int soma_dos_dois_digitos_menos_significativos(int numero){
    return (int) numero % 100;
}

int isqrt(int n) {
  return floor(sqrt(n));
}

void imprimir_raizes_especiais(){
    int parte_inteira, parte_decimal, raiz;
    for(int i=1000; i < 10000; i++){
        parte_inteira = (int) soma_dos_dois_digitos_mais_significativos(i);
        parte_decimal = (int) soma_dos_dois_digitos_menos_significativos(i);
        raiz = (int) isqrt(i);
        if (raiz * raiz == i && raiz == parte_inteira + parte_decimal){
            printf("%d é um dos números a ser impresso. Raiz: %d\n", i, raiz);
        }
    }
    printf("\n");
}
