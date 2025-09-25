class ContaBancaria:
    def __init__(self, titular, senha) -> None:
        self.titular = titular
        self.__saldo = 0.0
        self.__senha = senha

    def autenticar(self, senha):
        return self.__senha == senha

    def depositar(self, valor, senha):
        if not self.autenticar(senha):
            return "Senha incorreta. Depósito não autorizado."
        if valor <= 0:
            return "Valor de depósito deve ser positivo."
        self.__saldo += valor
        return f"Depósito de R${valor:.2f} realizado com sucesso."

    def sacar(self, valor, senha):
        if not self.autenticar(senha):
            return "Senha incorreta. Saque não autorizado."
        if valor <= 0:
            return "Valor de saque deve ser positivo."
        if valor > self.__saldo:
            return "Saldo insuficiente para saque."
        self.__saldo -= valor
        return f"Saque de R${valor:.2f} realizado com sucesso."

    def consultar_saldo(self, senha):
        if not self.autenticar(senha):
            return "Senha incorreta. Consulta não autorizada."
        return f"Saldo atual de {self.titular}: R${self.__saldo:.2f}"


if __name__ == "__main__":
    conta = ContaBancaria("João", "P2p2p004@")

    print(conta.consultar_saldo("P2p2p004@"))  # senha correta
    print(conta.depositar(500, "P2p2p004@"))   # depósito válido
    print(conta.consultar_saldo("P2p2p004@"))
    print(conta.sacar(200, "P2p2p004@"))       # saque válido
    print(conta.consultar_saldo("P2p2p004@"))
    print(conta.sacar(400, "P2p2p004@"))       # saldo insuficiente
    print(conta.consultar_saldo("P2p2p004@"))

    print("\n--- Testes de erro ---")
    print(conta.depositar(100, "senhaErrada"))   # senha errada
    print(conta.sacar(50, "senhaErrada"))        # senha errada
    print(conta.consultar_saldo("senhaErrada"))  # senha errada
    print(conta.depositar(-10, "P2p2p004@"))     # valor inválido
    print(conta.sacar(-20, "P2p2p004@"))         # valor inválido
