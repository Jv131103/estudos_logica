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

    reverse(){
        if (this.fila.length === 0) {
            console.log("Erro: fila vazia");
            return null;
        }

        let tamanho = this.fila.length
        for (let i = 0; i < Math.floor(tamanho / 2); i++) {
            const temp = this.fila[i];
            this.fila[i] = this.fila[tamanho - 1 - i];
            this.fila[tamanho - 1 - i] = temp;
        }
    }
}


let p = new Fila();
p.enqueue(1);
p.enqueue(2);
p.enqueue(3);
p.enqueue(4);
p.reverse();
p.viewFila();
