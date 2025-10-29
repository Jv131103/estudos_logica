#include <stdio.h>

/* Declarações antecipadas */
typedef struct Funcionario Funcionario;
typedef struct Gerente Gerente;
typedef void (*GetCargoFn)(Funcionario*);

/* Classe base "Funcionario" */
struct Funcionario {
    const char* nome;
    const char* cargo;
    GetCargoFn  get_cargo;  // “método” como ponteiro de função
};

void funcionario_get_cargo(Funcionario* self) {
    printf("Cargo do funcionário %s: %s\n", self->nome, self->cargo);
}

void funcionario_init(Funcionario* self, const char* nome) {
    self->nome = nome;
    self->cargo = "Funcionário";
    self->get_cargo = funcionario_get_cargo;  // método "padrão"
}

/* “Subclasse” Gerente: composição/embedding da base */
struct Gerente {
    Funcionario base;  // herança por composição
};

/* Método sobrescrito */
void gerente_get_cargo(Funcionario* self) {
    printf("Cargo do funcionário %s: %s\n", self->nome, self->cargo);
}

/* “Construtor” do Gerente */
void gerente_init(Gerente* self, const char* nome) {
    funcionario_init(&self->base, nome);      // “super()”
    self->base.cargo = "Gerente";             // especialização
    self->base.get_cargo = gerente_get_cargo; // sobrescrita
}


int main(void) {
    Funcionario f;
    funcionario_init(&f, "João");
    f.get_cargo(&f);

    Gerente g;
    gerente_init(&g, "Maria");
    g.base.get_cargo(&g.base);

    return 0;
}
