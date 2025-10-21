class No{
    constructor(valor){
        this.valor = valor;
        this.proximo = null;
    }
}


class ListaEncadeada{
    constructor(){
        this.head = null;  // Começo da lista
    }

    inserir(valor) {
        const novo_no = new No(valor);

        // Se a lista estiver vazia
        if (this.head === null){
            this.head = novo_no;
            return;
        }

        // Se já houver elementos, percorre até o final
        let atual = this.head;
        while (atual.proximo !== null) {
            atual = atual.proximo;
        }

        // Adiciona o novo nó no final
        atual.proximo = novo_no;
    }

    imprimir(){
        let atual = this.head;
        let resultado = '';
        while (atual !== null) {
        resultado += atual.valor + ' → ';
        atual = atual.proximo;
        }
        console.log(resultado + 'null');
    }
}


const lista = new ListaEncadeada();
lista.inserir(10);
lista.inserir(20);
lista.inserir(30);
lista.imprimir();
