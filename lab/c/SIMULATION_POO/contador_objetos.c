#include <stdio.h>

/* contador de classe — variável estática global */
static int contador = 0;

/* "Classe" Produzir */
struct Produzir {
    int id;
};

/* "Construtor" que cria um objeto e incrementa o contador */
struct Produzir criar_objeto() {
    contador++;
    struct Produzir novo;
    novo.id = contador;  // só pra mostrar o número do objeto
    return novo;
}

/* "Método" de exibição */
void mostrar() {
    printf("Criados %d objetos\n", contador);
}

int main() {
    struct Produzir p1 = criar_objeto();
    struct Produzir p2 = criar_objeto();
    struct Produzir p3 = criar_objeto();

    mostrar(); // mostra: Criados 3 objetos
    return 0;
}
