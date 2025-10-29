#include <stdio.h>

typedef struct Animal Animal;
typedef struct Cachorro Cachorro;
typedef struct Gato Gato;

/* Ponteiro para método */
typedef const char* (*FalarFn)(Animal*);

/* Classe base "Animal" */
struct Animal {
    FalarFn falar;
};

/* Função "abstrata" (não implementada) */
const char* animal_falar(Animal* self) {
    return "(Silêncio)"; // base genérica
}

/* Subclasse Cachorro */
struct Cachorro {
    Animal base;
};

const char* cachorro_falar(Animal* self) {
    return "Au au";
}

/* Subclasse Gato */
struct Gato {
    Animal base;
};

const char* gato_falar(Animal* self) {
    return "Miau";
}

/* Inicializadores */
void cachorro_init(Cachorro* c) {
    c->base.falar = cachorro_falar;
}

void gato_init(Gato* g) {
    g->base.falar = gato_falar;
}


int main() {
    Cachorro c;
    Gato g;

    cachorro_init(&c);
    gato_init(&g);

    printf("Cachorro: %s\n", c.base.falar((Animal*)&c));
    printf("Gato: %s\n", g.base.falar((Animal*)&g));

    return 0;
}
