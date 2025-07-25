#include <stdio.h>
#include <math.h>

/*
    PS: O compilador gcc compila o código, mas o linkador (ld) 
    precisa saber que deve usar a biblioteca matemática.
    
    -lm diz ao ld para ligar com a libm (math library), onde 
    está a função pow.
*/
// Para rodar com a lib: gcc exponenciacao.c -lm

int variante1(int valor, int expoente) {
    int contador = 1;
    int resultado = 1;

    while (contador <= expoente) {
        resultado *= valor;
        contador++;
    }

    return resultado;
}


int variante2(int valor, int expoente) {
    return (int)pow(valor, expoente);
}


int variante3(int base, int expoente) {
    int resultado = 1;

    while (expoente > 0) {
        if (expoente % 2 == 1) {
            resultado *= base;
        }
        base *= base;
        expoente /= 2;
    }

    return resultado;
}


int main() {
    int valor, expoente;

    printf("Digite a base: ");
    scanf("%d", &valor);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Não lemos expoente negativo\n");
    } else {
        int modelo1 = variante1(valor, expoente);
        printf("Modelo 1: %d\n", modelo1);

        int modelo2 = variante2(valor, expoente);
        printf("Modelo 2: %d\n", modelo2);

        int modelo3 = variante3(valor, expoente);
        printf("Modelo 3: %d\n", modelo3);
    }

    return 0;
}
