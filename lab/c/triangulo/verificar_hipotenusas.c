#include <stdio.h>
#include <math.h>


void verificar_hipotenusa(int n);
void verificar_hipotenusas(int n);

int main(){
    verificar_hipotenusa(20);
    verificar_hipotenusas(20);
    return 0;
}

void verificar_hipotenusa(int n){
    /*Essa versão baseia no opróprio limite sendo a hipotenusa*/
    int cateto_oposto = 1;

    while (cateto_oposto <= n){
        int cateto_adjascente = cateto_oposto;

        while (cateto_adjascente <= n){
            int hipotenusa = pow(cateto_oposto, 2) + pow(cateto_adjascente, 2);
            if (hipotenusa == pow(n, 2)){
                printf("%d é hipotenusa de (%d, %d)\n", n, cateto_oposto, cateto_adjascente);
            }
            cateto_adjascente += 1;
        }

        cateto_oposto += 1;
    }
}


void verificar_hipotenusas(int n){
    /*Essa versão supõe que precisamos encontrar no laço a hipotenusa*/
    for(int h=1; h<=n; h++){  // h é a hipotenusa que estamos testando
        int encontrou = 0;

        for (int a=1; a<h; a++){
            for (int b=a; b<h; b++){  // evita repetição espelhada
                if (pow(a, 2) + pow(b, 2) == pow(h, 2)){
                    printf("%d é hipotenusa de (%d, %d)\n", h, a, b);
                    encontrou = 1;
                    break;  // achou pelo menos um par, pode parar
                }
            }

            if (encontrou){
                break;
            }
        }
    }
}
