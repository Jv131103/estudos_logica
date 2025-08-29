function fib(n) {
    if (n === 0) {
        return 0;
    } else if (n === 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}


function fib2(n) {
    if (n === 0) {
        return [0, [0]];
    } else if (n === 1) {
        return [1, [0, 1]];
    }

    let n1 = 0;
    let n2 = 1;
    let sequencia = [n1, n2];

    for (let i = 2; i <= n; i++) {
        let temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        sequencia.push(n2);
    }

    return [n2, sequencia];
}


const prompt = require('prompt-sync')();
let n = parseInt(prompt("Digite n: "));

// Versão recursiva
let sequencia = [];
for (let i = 0; i <= n; i++) {
    sequencia.push(fib(i));
}
console.log(`f(${n})=${fib(n)} | seq: [${sequencia}]`);

// Versão iterativa
let retorno = fib2(n);
console.log(`f(${n})=${retorno[0]} | seq: [${retorno[1]}]`);
