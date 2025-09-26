function mover(origem, destino, nomeOrigem, nomeDestino) {
    if (origem.length === 0) {
        origem.push(destino.pop());
        console.log(`Mova disco de ${nomeDestino} para ${nomeOrigem}`);
    } else if (destino.length === 0) {
        destino.push(origem.pop());
        console.log(`Mova disco de ${nomeOrigem} para ${nomeDestino}`);
    } else if (origem[origem.length - 1] < destino[destino.length - 1]) {
        destino.push(origem.pop());
        console.log(`Mova disco de ${nomeOrigem} para ${nomeDestino}`);
    } else {
        origem.push(destino.pop());
        console.log(`Mova disco de ${nomeDestino} para ${nomeOrigem}`);
    }
}

function torreHanoiIterativa(n) {
    let origem = Array.from({ length: n }, (_, i) => n - i); // discos n..1
    let destino = [];
    let auxiliar = [];

    let nomes = ["A", "C", "B"];
    let totalMovimentos = Math.pow(2, n) - 1;

    if (n % 2 === 0) {
        nomes = ["A", "B", "C"];
    }

    for (let i = 1; i <= totalMovimentos; i++) {
        if (i % 3 === 1) {
            mover(origem, destino, nomes[0], nomes[1]);
        } else if (i % 3 === 2) {
            mover(origem, auxiliar, nomes[0], nomes[2]);
        } else {
            mover(auxiliar, destino, nomes[2], nomes[1]);
        }
    }
}

// Exemplo
torreHanoiIterativa(3);
