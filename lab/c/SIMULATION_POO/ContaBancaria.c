#include <stdio.h>
#include <string.h>

typedef struct {
    char titular[100];
    char senha[50];
    double saldo;
} ContaBancaria;

// "método privado"
int autenticar(ContaBancaria *conta, const char *senha) {
    return strcmp(conta->senha, senha) == 0;
}

ContaBancaria criarConta(const char *titular, const char *senha) {
    ContaBancaria conta;
    strncpy(conta.titular, titular, sizeof(conta.titular));
    strncpy(conta.senha, senha, sizeof(conta.senha));
    conta.saldo = 0.0;
    return conta;
}

const char* depositar(ContaBancaria *conta, double valor, const char *senha) {
    if (!autenticar(conta, senha)) {
        return "Senha incorreta. Depósito não autorizado.";
    }
    if (valor <= 0) {
        return "Valor de depósito deve ser positivo.";
    }
    conta->saldo += valor;
    static char buffer[100];
    snprintf(buffer, sizeof(buffer),
             "Depósito de R$%.2f realizado. Saldo atual: R$%.2f",
             valor, conta->saldo);
    return buffer;
}

const char* sacar(ContaBancaria *conta, double valor, const char *senha) {
    if (!autenticar(conta, senha)) {
        return "Senha incorreta. Saque não autorizado.";
    }
    if (valor <= 0) {
        return "Valor de saque deve ser positivo.";
    }
    if (valor > conta->saldo) {
        return "Saldo insuficiente para saque.";
    }
    conta->saldo -= valor;
    static char buffer[100];
    snprintf(buffer, sizeof(buffer),
             "Saque de R$%.2f realizado. Saldo atual: R$%.2f",
             valor, conta->saldo);
    return buffer;
}

const char* consultarSaldo(ContaBancaria *conta, const char *senha) {
    if (!autenticar(conta, senha)) {
        return "Senha incorreta. Consulta de saldo não autorizada.";
    }
    static char buffer[100];
    snprintf(buffer, sizeof(buffer),
             "Saldo atual: R$%.2f", conta->saldo);
    return buffer;
}

// --------------------------- TESTE
int main() {
    ContaBancaria conta = criarConta("João Silva", "P2p2p004@");

    printf("%s\n", consultarSaldo(&conta, "P2p2p004@"));
    printf("%s\n", depositar(&conta, 500, "P2p2p004@"));
    printf("%s\n", consultarSaldo(&conta, "P2p2p004@"));
    printf("%s\n", sacar(&conta, 200, "P2p2p004@"));
    printf("%s\n", consultarSaldo(&conta, "P2p2p004@"));
    printf("%s\n", sacar(&conta, 400, "P2p2p004@"));
    printf("%s\n", consultarSaldo(&conta, "P2p2p004@"));

    printf("\n--- Testes de erro ---\n");
    printf("%s\n", depositar(&conta, 100, "senhaErrada"));
    printf("%s\n", sacar(&conta, 50, "senhaErrada"));
    printf("%s\n", consultarSaldo(&conta, "senhaErrada"));
    printf("%s\n", depositar(&conta, -10, "P2p2p004@"));
    printf("%s\n", sacar(&conta, -20, "P2p2p004@"));

    return 0;
}
