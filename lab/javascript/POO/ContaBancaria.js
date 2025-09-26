class ContaBancaria {
    #saldo;   // campo privado
    #senha;
    constructor(titular, senha){
        this.titular = titular;
        this.#senha = senha;
        this.#saldo = 0;
    }

    #autenticar(senha){
        return this.#senha === senha;
    }

    depositar(valor, senha){
        if (!this.#autenticar(senha)){
            return "Senha incorreta. Depósito não autorizado.";
        }
        if (valor <= 0){
            return "Valor de depósito deve ser positivo.";
        }
        this.#saldo += valor;
        return `Depósito de R$${valor.toFixed(2)} realizado com sucesso. Saldo atual: R$${this.#saldo.toFixed(2)}`;
    }

    sacar(valor, senha){
        if (!this.#autenticar(senha)){
            return "Senha incorreta. Saque não autorizado.";
        }
        if (valor <= 0){
            return "Valor de saque deve ser positivo.";
        }
        if (valor > this.#saldo){
            return "Saldo insuficiente para o saque.";
        }
        this.#saldo -= valor;
        return `Saque de R$${valor.toFixed(2)} realizado com sucesso. Saldo atual: R$${this.#saldo.toFixed(2)}`;
    }

    consultarSaldo(senha){
        if (!this.#autenticar(senha)){
            return "Senha incorreta. Consulta de saldo não autorizada.";
        }
        return `Saldo atual: R$${this.#saldo.toFixed(2)}`;
    }
}

conta = new ContaBancaria("João Silva", "P2p2p004@");
console.log(conta.consultarSaldo("P2p2p004@"))  // senha correta
console.log(conta.depositar(500, "P2p2p004@"))   // depósito válido
console.log(conta.consultarSaldo("P2p2p004@"))
console.log(conta.sacar(200, "P2p2p004@"))       // saque válido
console.log(conta.consultarSaldo("P2p2p004@"))
console.log(conta.sacar(400, "P2p2p004@"))       // saldo insuficiente
console.log(conta.consultarSaldo("P2p2p004@"))

console.log("\n--- Testes de erro ---")
console.log(conta.depositar(100, "senhaErrada"))   // senha errada
console.log(conta.sacar(50, "senhaErrada"))        // senha errada
console.log(conta.consultarSaldo("senhaErrada"))  // senha errada
console.log(conta.depositar(-10, "P2p2p004@"))     // valor inválido
console.log(conta.sacar(-20, "P2p2p004@"))         // valor inválido

