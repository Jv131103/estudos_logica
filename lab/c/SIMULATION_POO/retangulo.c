#include <stdio.h>

typedef struct
{
    int largura;
    int altura;
} Retangulo;

void repr(Retangulo r){
    printf("Retangulo(largura=%d, altura=%d)\n", r.largura, r.altura);
}

int area(Retangulo r){
    return r.largura * r.altura;
}

int main(){
    Retangulo ret;

    ret.altura = 4;
    ret.largura = 5;

    repr(ret);
    printf("Área = %d\n", area(ret));
}
