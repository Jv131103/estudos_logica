#include <stdio.h>


const char* dia_da_semana(int numero);

int main(){
    for (int i=1; i <= 7; i++){
        printf("%s\n", dia_da_semana(i));
    }
    return 0;
}


const char* dia_da_semana(int numero){
    if (numero < 1 || numero > 7){
        printf("Número inválido: escolha entre 1 e 7.\n");
        return "";
    }

    const char* dias[] = {
        "Segunda-feira",
        "Terça-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sábado",
        "Domingo"
    };

    return dias[numero - 1];
}
