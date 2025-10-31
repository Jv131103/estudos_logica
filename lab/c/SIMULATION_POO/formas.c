#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* -------------------- Interface (Formas) -------------------- */
typedef struct Formas {
    double (*area)(void* self);  // ponteiro para função "virtual"
} Formas;

/* -------------------- Quadrado -------------------- */
typedef struct {
    Formas base;  // herança por composição
    double lado1;
    double lado2;
} Quadrado;

double quadrado_area(void* self) {
    Quadrado* q = (Quadrado*)self;
    return q->lado1 * q->lado2;
}

Quadrado* criar_quadrado(double lado1, double lado2) {
    Quadrado* q = malloc(sizeof(Quadrado));
    q->lado1 = lado1;
    q->lado2 = lado2;
    q->base.area = quadrado_area; // vincula o método
    return q;
}

/* -------------------- Círculo -------------------- */
typedef struct {
    Formas base;
    double raio;
} Circulo;

double circulo_area(void* self) {
    Circulo* c = (Circulo*)self;
    return 3.14 * c->raio * c->raio;
}

Circulo* criar_circulo(double raio) {
    Circulo* c = malloc(sizeof(Circulo));
    c->raio = raio;
    c->base.area = circulo_area;
    return c;
}

/* -------------------- Triângulo -------------------- */
typedef struct {
    Formas base;
    double base_t;
    double altura;
} Triangulo;

double triangulo_area(void* self) {
    Triangulo* t = (Triangulo*)self;
    return (t->base_t * t->altura) / 2.0;
}

Triangulo* criar_triangulo(double base_t, double altura) {
    Triangulo* t = malloc(sizeof(Triangulo));
    t->base_t = base_t;
    t->altura = altura;
    t->base.area = triangulo_area;
    return t;
}

/* -------------------- Programa Principal -------------------- */
int main() {
    Quadrado* q = criar_quadrado(2, 2);
    Circulo* c = criar_circulo(2);
    Triangulo* t = criar_triangulo(2, 2);

    printf("Área do Quadrado: %.2f\n", q->base.area(q));
    printf("Área do Círculo: %.2f\n", c->base.area(c));
    printf("Área do Triângulo: %.2f\n", t->base.area(t));

    free(q);
    free(c);
    free(t);
    return 0;
}
