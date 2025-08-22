// Versão 1
function soma1(x, y){
    // console.log(x + y);
    return x + y;
}


// Versão 2
function soma2(x, y){
    const soma = x + y;
    // console.log(soma);
    return soma;
}


// Versão 3
const prompt = require('prompt-sync')();
let x = parseFloat(prompt("X: "));
let y = parseFloat(prompt("Y: "));

let soma = x + y;
console.log("Soma:", soma);

// Chamando outras verções
soma = soma1(x, y);
console.log(`Soma: ${soma}`);

console.log(`Soma: ${soma2(x, y)}`);
