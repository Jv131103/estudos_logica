#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100

// Estrutura Livro
typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

// Estrutura Biblioteca
typedef struct {
    char nome[100];
    Livro livros[MAX_LIVROS];
    int qtd;
} Biblioteca;

// Função para criar livro
Livro criarLivro(const char *titulo, const char *autor, int ano) {
    Livro l;
    strncpy(l.titulo, titulo, sizeof(l.titulo));
    strncpy(l.autor, autor, sizeof(l.autor));
    l.ano = ano;
    return l;
}

// Adicionar livro
void adicionarLivro(Biblioteca *b, Livro l) {
    for (int i = 0; i < b->qtd; i++) {
        if (strcmp(b->livros[i].titulo, l.titulo) == 0) {
            printf("Livro já existe na biblioteca.\n");
            return;
        }
    }
    if (b->qtd < MAX_LIVROS) {
        b->livros[b->qtd++] = l;
    } else {
        printf("Biblioteca cheia!\n");
    }
}

// Listar livros
void listarLivros(Biblioteca *b) {
    printf("== Livros da biblioteca %s ==\n", b->nome);
    for (int i = 0; i < b->qtd; i++) {
        printf("'%s' por %s, publicado em %d\n",
               b->livros[i].titulo,
               b->livros[i].autor,
               b->livros[i].ano);
    }
}

// Remover livro por título
void removerLivro(Biblioteca *b, const char *titulo) {
    for (int i = 0; i < b->qtd; i++) {
        if (strcmp(b->livros[i].titulo, titulo) == 0) {
            // desloca os outros para "tapar o buraco"
            for (int j = i; j < b->qtd - 1; j++) {
                b->livros[j] = b->livros[j + 1];
            }
            b->qtd--;
            printf("Livro '%s' removido.\n", titulo);
            return;
        }
    }
    printf("Livro '%s' não encontrado.\n", titulo);
}

// MAIN para testar
int main() {
    Biblioteca b = {"Biblioteca Central", {}, 0};

    Livro l1 = criarLivro("1984", "George Orwell", 1949);
    Livro l2 = criarLivro("To Kill a Mockingbird", "Harper Lee", 1960);
    Livro l3 = criarLivro("The Great Gatsby", "F. Scott Fitzgerald", 1925);

    adicionarLivro(&b, l1);
    adicionarLivro(&b, l2);
    adicionarLivro(&b, l3);

    listarLivros(&b);

    removerLivro(&b, "1984");
    listarLivros(&b);

    removerLivro(&b, "1984");
    listarLivros(&b);

    return 0;
}
