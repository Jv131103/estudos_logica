#include <stdio.h>
#include <math.h>


int sum_primes(int limite);
int sum_primes2(const int numeros[], size_t tamanho);


int main(){
    printf("%d\n", sum_primes(10));

    int lista[] = {1, 2, 3, 5, 4, 6, 3};
    size_t n = sizeof lista / sizeof lista[0];
    printf("%d\n", sum_primes2(lista, n));

    return 0;
}

int is_prime(int numero){
    if (numero == 0 || numero == 1){
        return 0;
    }

    int cont = 0;

    for (int divisor=1; divisor <= numero; divisor++){
        if (numero % divisor == 0){
            cont ++;
        }
    }

    if (cont == 2){
        return 1;
    }
    return 0;
}

int is_prime_optimize(int numero){
    if (numero < 2){ // 0 e 1 não são primos
        return 0;
    }
    if (numero == 2){ // 2 é primo
        return 1;   
    }
    if (numero % 2 == 0){ // elimina todos os pares > 2
        return 0;
    }

    // testa apenas ímpares até a raiz quadrada
    int limite = (int) pow(numero, 0.5) + 1;
    for (int divisor=3; divisor < limite; divisor+=2){
        if (numero % divisor == 0){
            return 0;
        }
    }
    return 1;
}

int sum_primes(int limite){
    int soma = 0;
    for (int x=0; x < limite; x++){
        if (is_prime(x)){
            soma += x;
        }
    }
    return soma;
}

int sum_primes2(const int numeros[], size_t tamanho) {
    int soma = 0;
    for (size_t i = 0; i < tamanho; i++)
        if (is_prime_optimize(numeros[i])) soma += numeros[i];
    return soma;
}
