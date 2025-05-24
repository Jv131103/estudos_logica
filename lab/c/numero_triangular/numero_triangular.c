#include <stdio.h>
#include <math.h>


int is_triangular(int n);


int main(){
    printf("%d\n", is_triangular(120));
    printf("%d\n", is_triangular(23));
    return 0;
}


int is_triangular(int n){
    /*
    Calcula o discriminante (delta) da equação quadrática derivada da fórmula 
    do número triangular:

        n = k * (k + 1) / 2  --> equação quadrática: k^2 + k - 2n = 0
    
    */
    int delta = 8 * n + 1;  // Discriminante da fórmula de Bhaskara: Δ = b² - 4ac

    // Calcula a raiz quadrada de delta
    double raiz = sqrt(delta);

    // Arredonda a raiz para inteiro (para testar se é uma raiz exata)
    int raiz_arredondada = (int) raiz;

    // Verifica se a raiz quadrada é exata.
    // Se não for exata, então 'n' não é triangular, porque o delta não é quadrado perfeito.
    if (raiz_arredondada * raiz_arredondada != delta){
        return 0;
    }

    // Calcula o valor de k usando a fórmula de Bhaskara simplificada:
    // k = (-b + √Δ) / 2a   --> como a = 1 e b = 1, então: k = (-1 + raiz) / 2
    int resultado = (-1 + raiz_arredondada) / 2;

    // Verifica se realmente k*(k+1)/2 é igual a n
    // Isso é uma checagem final por segurança contra possíveis erros de arredondamento
    return resultado * (resultado + 1) / 2 == n;
}
