class Fila {
    constructor() {
        this.fila = [];
        this.valorRemovido = null;
    }

    enqueue(valor) {
        this.fila.push(valor);
    }

    dequeue() {
        if (this.fila.length === 0) {
            console.log("Erro: fila vazia");
            return null;
        }
        this.valorRemovido = this.fila.shift(); // remove do início
        return this.valorRemovido;
    }

    viewFila() {
        console.log("Fila:", this.fila);
        console.log("Próximo a sair:", this.fila.length ? this.fila[0] : null);
        console.log("Último removido:", this.valorRemovido);
    }
}

// Teste
let f = new Fila();
f.enqueue(10);
f.enqueue(20);
f.enqueue(30);
f.viewFila();
f.dequeue();
f.viewFila();
