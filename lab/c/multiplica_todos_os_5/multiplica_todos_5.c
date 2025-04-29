#include <stdio.h>

int multiplica_todos_por_5();

int main(){
    printf("%d\n", multiplica_todos_por_5());
}

int multiplica_todos_por_5(){
    int multiplica = 5;
    
    for (int i=1; i <= 5; i++){
        multiplica *= i;
    }

    return multiplica;
}
