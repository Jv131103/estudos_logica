#include <stdio.h>
#include <string.h>

#define MAX_NOTAS 100

typedef struct {
    char nome[100];
    float notas[MAX_NOTAS];
    int qtdNotas;
} Aluno;

// Função para criar aluno
Aluno criarAluno(const char *nome) {
    Aluno a;
    strncpy(a.nome, nome, sizeof(a.nome));
    a.qtdNotas = 0;
    return a;
}

// Adicionar nota
void adicionarNota(Aluno *a, float nota) {
    if (a->qtdNotas < MAX_NOTAS) {
        a->notas[a->qtdNotas++] = nota;
    }
}

// Calcular média
float calcularMedia(Aluno *a) {
    if (a->qtdNotas == 0) return 0;
    float soma = 0;
    for (int i = 0; i < a->qtdNotas; i++) {
        soma += a->notas[i];
    }
    return soma / a->qtdNotas;
}

// Verificar aprovação
int aprovado(Aluno *a) {
    return calcularMedia(a) >= 6;
}

// Printar aluno
void printAluno(Aluno *a) {
    printf("Aluno: %s, Notas: [", a->nome);
    for (int i = 0; i < a->qtdNotas; i++) {
        printf("%.1f", a->notas[i]);
        if (i < a->qtdNotas - 1) printf(", ");
    }
    printf("], Média: %.2f\n", calcularMedia(a));
}

int main() {
    Aluno aluno1 = criarAluno("Maria");
    adicionarNota(&aluno1, 7);
    adicionarNota(&aluno1, 8);
    adicionarNota(&aluno1, 6);

    printAluno(&aluno1);
    printf("%s\n\n", aprovado(&aluno1) ? "true" : "false");

    Aluno aluno2 = criarAluno("João");
    adicionarNota(&aluno2, 5);
    adicionarNota(&aluno2, 4);
    adicionarNota(&aluno2, 6);

    printAluno(&aluno2);
    printf("%s\n", aprovado(&aluno2) ? "true" : "false");

    return 0;
}
