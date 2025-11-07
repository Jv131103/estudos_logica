#include <stdio.h>

#define TAMANHO 10

int esta_vazia(int pilha[], int topo){
    return topo == 0;
}

int empilha(int pilha[], int *topo, int valor){
    if (*topo == TAMANHO){
        printf("Erro: pilha cheia!\n");
        return 0;
    }
    
    pilha[*topo] = valor;
    (*topo)++;

    return 1; //sucesso
}

int desempilha(int pilha[], int *topo){
    if (esta_vazia(pilha, *topo)){
        printf("Erro, a lista está vazia!\n");
        return -1;
    }
    (*topo)--;
    return pilha[*topo];
}

int topoPilha(int pilha[], int topo){
    if (esta_vazia(pilha, topo)){
        printf("Lista está vazia!\n");
        return -1;
    }
    return pilha[topo - 1];
}


int tamanho(int topo){
    return topo;
}


int main(){
    int pilha[TAMANHO];

    int topo = 0; // Indica quantos elementos há na pilha

    empilha(pilha, &topo, 10);
    empilha(pilha, &topo, 20);
    empilha(pilha, &topo, 30);

    printf("%d\n", desempilha(pilha, &topo));
    printf("%d\n", topoPilha(pilha, topo));
    printf("%d\n", tamanho(topo));
}
