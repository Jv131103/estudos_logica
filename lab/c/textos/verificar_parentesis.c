#include <stdio.h>
#include <string.h>

#define MAX 100  // tamanho máximo da pilha

// estrutura simples de pilha
typedef struct {
    char itens[MAX];
    int topo;
} Pilha;

// inicializa a pilha
void inicializa(Pilha *p) {
    p->topo = -1;
}

// verifica se está vazia
int vazia(Pilha *p) {
    return p->topo == -1;
}

// empilha um caractere
void push(Pilha *p, char c) {
    if (p->topo < MAX - 1) {
        p->itens[++(p->topo)] = c;
    }
}

// desempilha e retorna o elemento removido
char pop(Pilha *p) {
    if (vazia(p)) {
        return '\0';  // retorno nulo se a pilha estiver vazia
    }
    return p->itens[(p->topo)--];
}

// função principal para verificar parênteses
int verifica_parenteses(const char *str) {
    Pilha p;
    inicializa(&p);

    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];

        if (c == '(') {
            push(&p, c);
        } else if (c == ')') {
            if (vazia(&p)) {
                return 0;  // tentou fechar sem abrir
            }
            pop(&p);
        }
    }

    return vazia(&p);  // se vazia no final, está balanceado
}

// teste
int main() {
    const char *testes[] = {
        "(())",
        "(()",
        "())",
        "",
        "((()()))"
    };

    for (int i = 0; i < 5; i++) {
        if (verifica_parenteses(testes[i])) {
            printf("%s -> Válido\n", testes[i]);
        } else {
            printf("%s -> Inválido\n", testes[i]);
        }
    }

    return 0;
}
