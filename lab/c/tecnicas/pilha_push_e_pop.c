#include <stdio.h>
#include <stdbool.h>

#define CAP 100

typedef struct {
    int data[CAP];
    int top; // índice do próximo espaço livre
} Stack;

void init(Stack *s) { s->top = 0; }
bool is_empty(const Stack *s) { return s->top == 0; }
bool is_full(const Stack *s)  { return s->top == CAP; }

void push(Stack *s, int x) {
    if (is_full(s)) { printf("Erro: pilha cheia\n"); return; }
    s->data[s->top++] = x;
}

int pop(Stack *s) {
    if (is_empty(s)) { printf("Erro: pilha vazia\n"); return 0; }
    return s->data[--s->top];
}

int main(void) {
    Stack s; init(&s);
    push(&s, 1);
    push(&s, 2);
    printf("pop: %d\n", pop(&s)); // 2
    printf("Pilha final: [");
    for (int i = 0; i < s.top; i++) {
        if (i) printf(", ");
        printf("%d", s.data[i]);
    }
    printf("]\n");
    return 0;
}
