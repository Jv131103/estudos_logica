class FilaCircular {
    constructor(tamanho) {
        this.tamanho = tamanho;
        this.fila = new Array(tamanho).fill(null);
        this.front = 0;
        this.rear = 0;
        this.quantidade = 0;
    }

    enfileirar(valor) {
        if (this.quantidade === this.tamanho) {
            console.log("Fila cheia!");
            return;
        }

        this.fila[this.rear] = valor;
        this.rear = (this.rear + 1) % this.tamanho;
        this.quantidade++;
    }

    desenfileirar() {
        if (this.quantidade === 0) {
            console.log("Fila vazia!");
            return null;
        }

        const valor = this.fila[this.front];
        this.fila[this.front] = null;
        this.front = (this.front + 1) % this.tamanho;
        this.quantidade--;
        return valor;
    }

    print() {
        console.log(`Fila: [${this.fila.join(", ")}] | front=${this.front} | rear=${this.rear} | qtd=${this.quantidade}`);
    }
}


const fila = new FilaCircular(3);
fila.enfileirar(10);
fila.enfileirar(20);
fila.enfileirar(30);
fila.print();

console.log("Desenfileirado:", fila.desenfileirar());
fila.enfileirar(40);
fila.print();
