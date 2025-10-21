class Pilha {
    constructor() {
        this.pilha = [];
    }

    isEmpty() {
        return this.pilha.length === 0;
    }

    push(x) {
        this.pilha.push(x);
    }

    pop() {
        if (this.isEmpty()) {
            return null;
        }
        return this.pilha.pop();
    }

    peek() {
        if (this.isEmpty()) {
            return null;
        }
        return this.pilha[this.pilha.length - 1];
    }
}


function verifica_parenteses(string) {
    const pilha = new Pilha();

    for (const char of string) {  // <-- importante: for...of
        if (char === '(' || char === '[' || char === '{') {
            pilha.push(char);
        } else if (char === ')' || char === ']' || char === '}') {
            if (pilha.isEmpty()) {
                return false; // fechou sem abrir
            }
            pilha.pop();
        }
    }

    return pilha.isEmpty(); // true se estiver balanceado
}


// Testes
const strings = [
    "(())",
    "(()",
    "())",
    "",
    "((()()))"
];

for (const s of strings) {  // <-- for...of
    console.log(`${s} -> ${verifica_parenteses(s) ? 'Válido' : 'Inválido'}`);
}
