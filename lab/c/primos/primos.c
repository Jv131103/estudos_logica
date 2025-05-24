#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int is_prime(int n);
int is_prime2(int n);
int is_prime3(int n);
int is_prime4(int n);

int main(){
    printf("%d\n", is_prime(7));
    printf("%d\n", is_prime(4));

    printf("%d\n", is_prime2(7));
    printf("%d\n", is_prime2(4));

    printf("%d\n", is_prime3(7));
    printf("%d\n", is_prime3(4));

    printf("%d\n", is_prime4(7));
    printf("%d\n", is_prime4(4));

    return 0;
}


int is_prime(int n){
    if (n < 2) {
        return 0;
    }

    int cont = 0;
    for (int x = 1; x <= n; x++){
        if (n % x == 0){
            cont ++;
        }
    }

    return cont == 2;
}


int is_prime2(int n){
    if (n < 2) {
        return 0;
    }

    int limite = (int) sqrt(n);

    for (int x = 2; x <= limite; x++){
        if (n % x == 0) {
            return 0;
        }
    }

    return 1;
}


int* crivo_eratostenes(int limite) {
    int *primos = malloc((limite + 1) * sizeof(int));
    if (primos == NULL) {
        printf("Erro de alocação.\n");
        exit(1);
    }

    for (int i = 0; i <= limite; i++) {
        primos[i] = 1;
    }
    primos[0] = primos[1] = 0;

    int raiz = sqrt(limite);
    for (int p = 2; p <= raiz; p++) {
        if (primos[p]) {
            for (int i = p * p; i <= limite; i += p) {
                primos[i] = 0;
            }
        }
    }

    return primos;
}

int is_prime3(int n) {
    int *primos = crivo_eratostenes(n);
    int resultado = primos[n];  // 1 se primo, 0 se não primo
    free(primos);
    return resultado;
}


int is_prime4(int n){
    if (n < 2) {
        return 0;
    }

    int divisor = 2;
    int ehPrimo = 1;

    while (divisor < n && ehPrimo) {
        if (n % divisor == 0){
            ehPrimo = 0;
        }

        divisor ++;
    }

    return ehPrimo;
}
