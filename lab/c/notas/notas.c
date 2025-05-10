#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void maior_menor_nota(int qtd_alunos); 

int main(){
    maior_menor_nota(10);
    return 0;
}

// Remove o '\n' final lido pelo fgets
void remover_newline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

// Verifica se a string é um número float válido
int is_float_valido(const char *entrada) {
    int i = 0, ponto = 0, digito = 0;

    while (isspace(entrada[i])) i++; // espaços antes

    if (entrada[i] == '+' || entrada[i] == '-') i++; // sinal

    while (entrada[i]) {
        if (isdigit(entrada[i])) {
            digito = 1;
        } else if (entrada[i] == '.') {
            if (ponto) return 0; // segundo ponto → inválido
            ponto = 1;
        } else if (!isspace(entrada[i])) {
            return 0; // caractere inválido
        }
        i++;
    }

    return digito; // precisa ter pelo menos um dígito
}

float valida_nota(int aluno){
    char linha[100];
    float nota, tipo;

    printf("Digite a nota do aluno %d: ", aluno);
    if (fgets(linha, sizeof(linha), stdin)) {
        remover_newline(linha);

        if (is_float_valido(linha)) {
            nota = strtof(linha, NULL);
            if (nota >= 0.0 && nota <= 100.0) {
                return nota;
            } else {
                printf("Nota fora do intervalo permitido (0 a 100).\n");
            }
        } else {
            printf("Entrada inválida: digite apenas números.\n");
        }
    }
    return -1;
}

void maior_menor_nota(int qtd_alunos){
    int cont, aluno_maior, aluno_menor;
    float maior, menor, nota;

    maior = 0;
    menor = 100;
    cont = 1;

    while (cont <= qtd_alunos){
        nota = valida_nota(cont);
        if (nota >= 0){  // Valida se a nota funcionou, se não mantém até acertar
            if (nota > maior){
                aluno_maior = cont;
                maior = nota;
            }

            if (nota < menor){
                aluno_menor = cont;
                menor = nota;
            }
            cont ++;
        }
    }

    printf("A Maior nota foi do aluno %d com nota %.2f\n", aluno_maior, maior);
    printf("A Menor nota foi do aluno %d com nota %.2f\n", aluno_menor, menor);
}
