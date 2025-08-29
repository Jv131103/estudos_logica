#include <stdio.h>
#include <math.h>


void pares_entre_dois_numeros(int m, int n){
    float bestVal = - INFINITY;
    int bestX = 0;
    int bestY = 0;

    for(int x=0; x < m; x++){
        for (int y=0; y < n; y++){
            int E = x * y - x * x + y;

            if (E > bestVal){
                bestVal = E;
                bestX = x;
                bestY = y;
            }
        }
    }

    printf("%d, %d, %.0f\n", bestX, bestY, bestVal);
}


int main(){
    pares_entre_dois_numeros(2, 4);
    return 0;
}
