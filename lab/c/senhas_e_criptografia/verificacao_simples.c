#include <stdio.h>
#include <string.h>

#define MAX 3
#define SENHA "1234"

int veririca_senha(char *senha) {
    if (strcmp(senha, SENHA) == 0) {
        return 1; // Senha correta
    }
    return 0; // Senha incorreta
}

int main() {
    char senha[150];
    int tentativas = 0;

    while (tentativas < MAX) {
        printf("Digite a senha: ");
        scanf("%19s", senha); // Limita a entrada para evitar overflow

        if (veririca_senha(senha)) {
            printf("Acesso permitido!\n");
            return 0; // Sai do programa com sucesso
        } else {
            printf("Senha incorreta. Tente novamente.\n");
            tentativas++;
        }
    }

    printf("Numero maximo de tentativas atingido. Acesso bloqueado.\n");
    return 1; // Sai do programa com erro
}
