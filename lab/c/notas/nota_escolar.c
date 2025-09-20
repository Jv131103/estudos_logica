#include <stdio.h>


const char* nota_escolar(double nota){
    if (nota >= 6){
        return "Aprovado";
    } else if (nota >= 4){
        return "Recuperação";
    } else{
        return "Reprovado";
    }
}

int main(){
    int notas[] = {10.0, 7.0, 6.6, 6.0, 5.2, 5.0, 4.8, 4.0, 3.0, 3.7, 1.0, 0.0};

    int tamanho = sizeof(notas) / sizeof(notas[0]);

    int i = 0;

    while (i < tamanho){
        printf("%s\n", nota_escolar(notas[i]));
        i++;
    }

    return 0;
}
