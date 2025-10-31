#include <stdio.h>
#include <string.h>

/* Interface simulada: Imprimivel */
typedef struct Imprimivel {
    void (*imprimir)(void* self);
} Imprimivel;

/* Classe Relatorio */
typedef struct {
    Imprimivel base;
    char nome[50];
    char data[20];
    char descricao[100];
} Relatorio;

void relatorio_imprimir(void* self) {
    Relatorio* r = (Relatorio*)self;
    printf("Nome do relatório: %s\n", r->nome);
    printf("Data de Criação: %s\n", r->data);
    printf("Descrição: %s\n", r->descricao);
}

/* Classe Etiqueta */
typedef struct {
    Imprimivel base;
    char nome[50];
    char data[20];
    char descricao[100];
} Etiqueta;

void etiqueta_imprimir(void* self) {
    Etiqueta* e = (Etiqueta*)self;
    printf("Nome da etiqueta: %s\n", e->nome);
    printf("Data de Criação: %s\n", e->data);
    printf("Descrição: %s\n", e->descricao);
}

/* Programa principal */
int main() {
    Relatorio r;
    strcpy(r.nome, "Confidencial 151 - Fenômeno");
    strcpy(r.data, "31/10/1995");
    strcpy(r.descricao, "SEM REGISTRO");
    r.base.imprimir = relatorio_imprimir;

    Etiqueta e;
    strcpy(e.nome, "Lembrete de estudo");
    strcpy(e.data, "31/10/2025");
    strcpy(e.descricao, "Estudar lógica");
    e.base.imprimir = etiqueta_imprimir;

    r.base.imprimir(&r);
    printf("\n");
    e.base.imprimir(&e);

    return 0;
}
