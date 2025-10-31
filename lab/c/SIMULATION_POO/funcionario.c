#include <stdio.h>

/* --------- Declarações --------- */
typedef struct Funcionario Funcionario;
typedef struct Gerente Gerente;
typedef struct Diretor Diretor;
typedef struct Estagiario Estagiario;

typedef void   (*GetCargoFn)(Funcionario*);
typedef double (*CalcularBonusFn)(Funcionario*);

/* --------- Base: Funcionario --------- */
struct Funcionario {
    const char* nome;
    const char* cargo;
    double salario;

    GetCargoFn         get_cargo;
    CalcularBonusFn    calcular_bonus;  // “virtual”
};

void funcionario_get_cargo(Funcionario* self) {
    printf("Cargo do funcionário %s: %s\n", self->nome, self->cargo);
}

/* genérico: por padrão, sem bônus */
double funcionario_calcular_bonus(Funcionario* self) {
    (void)self; /* não usado */
    return 0.0;
}

void funcionario_init(Funcionario* self, const char* nome) {
    self->nome = nome;
    self->cargo = "Funcionário";
    self->salario = 0.0;
    self->get_cargo = funcionario_get_cargo;
    self->calcular_bonus = funcionario_calcular_bonus;
}

/* --------- “Subclasse”: Gerente --------- */
struct Gerente {
    Funcionario base;
};

double gerente_calcular_bonus(Funcionario* self) {
    return self->salario + self->salario * 0.10;  // +10%
}

void gerente_init(Gerente* self, const char* nome, double salario) {
    funcionario_init(&self->base, nome);        // “super()”
    self->base.cargo = "Gerente";
    self->base.salario = salario;
    self->base.get_cargo = funcionario_get_cargo;  // (mesma exibição)
    self->base.calcular_bonus = gerente_calcular_bonus; // sobrescrita
}

/* --------- “Subclasse”: Diretor --------- */
struct Diretor {
    Funcionario base;
};

double diretor_calcular_bonus(Funcionario* self) {
    return self->salario + self->salario * 0.20;  // +20%
}

void diretor_init(Diretor* self, const char* nome, double salario) {
    funcionario_init(&self->base, nome);
    self->base.cargo = "Diretor";
    self->base.salario = salario;
    self->base.calcular_bonus = diretor_calcular_bonus;
}

/* --------- “Subclasse”: Estagiario --------- */
struct Estagiario {
    Funcionario base;
};

double estagiario_calcular_bonus(Funcionario* self) {
    return self->salario + self->salario * 0.05;  // +5%
}

void estagiario_init(Estagiario* self, const char* nome, double salario) {
    funcionario_init(&self->base, nome);
    self->base.cargo = "Estagiário";
    self->base.salario = salario;
    self->base.calcular_bonus = estagiario_calcular_bonus;
}

/* --------- Teste --------- */
int main(void) {
    Funcionario f;
    funcionario_init(&f, "João");
    f.get_cargo(&f);

    Gerente g;
    gerente_init(&g, "Maria", 5000.0);
    g.base.get_cargo(&g.base);

    Diretor d;
    diretor_init(&d, "Carlos", 10000.0);
    d.base.get_cargo(&d.base);

    Estagiario e;
    estagiario_init(&e, "Pedro", 2500.0);
    e.base.get_cargo(&e.base);

    printf("%s receberá bônus de: R$ %.2f\n", g.base.nome, g.base.calcular_bonus(&g.base));
    printf("%s receberá bônus de: R$ %.2f\n", d.base.nome, d.base.calcular_bonus(&d.base));
    printf("%s receberá bônus de: R$ %.2f\n", e.base.nome, e.base.calcular_bonus(&e.base));

    return 0;
}
