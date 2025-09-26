#include <stdio.h>


typedef struct {
    char nome[125];
    int idade;
} Pessoa;


void apresentar(Pessoa p) {
    printf("Olá, meu nome é %s e eu tenho %d anos.\n", p.nome, p.idade);
}

int main() {
    Pessoa pessoa1;

    // Definindo os atributos da pessoa
    snprintf(pessoa1.nome, sizeof(pessoa1.nome), "João");
    pessoa1.idade = 30;

    // Apresentando a pessoa
    apresentar(pessoa1);

    return 0;
}
