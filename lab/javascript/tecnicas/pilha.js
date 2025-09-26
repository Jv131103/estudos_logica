class Pilha {
    constructor() {
        this.stack = [];
        this.valorRemovido = null;
    }

    push(value) {
        this.stack.push(value);
    }

    pop() {
        if (this.stack.length === 0) {
            console.log("Erro: pilha vazia");
            return null;
        }
        this.valorRemovido = this.stack.pop();
        return this.valorRemovido;
    }

    viewPilha() {
        console.log("Pilha:", this.stack);
        console.log("Valor do topo:", this.stack.length ? this.stack[this.stack.length - 1] : null);
        console.log("Último removido:", this.valorRemovido);
    }
}

// Teste
let p = new Pilha();
p.push(10);
p.push(20);
p.push(30);
p.viewPilha();

console.log("Pop:", p.pop());
p.viewPilha();
