#include <stdio.h>


typedef struct {
    char nome[125];
    int idade;
} Pessoa;


void info(Pessoa p) {
    printf("Nome: %s, Idade: %d\n", p.nome, p.idade);
}

void apresentar(Pessoa p) {
    printf("Olá, meu nome é %s\n", p.nome);
}

int main() {
    Pessoa pessoa1;
    // Definindo os atributos da pessoa
    snprintf(pessoa1.nome, sizeof(pessoa1.nome), "João");
    pessoa1.idade = 21;

    // informação da pessoa
    info(pessoa1);

    // apresentar a pessoa
    apresentar(pessoa1);

    return 0;
}
