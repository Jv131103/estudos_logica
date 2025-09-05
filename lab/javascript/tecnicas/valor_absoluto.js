const prompt = require('prompt-sync')();

// Versão 1
let numero = parseInt(prompt());
console.log(Math.abs(numero));

// Versão 2
numero = parseInt(prompt());
if (numero >= 0){
    console.log(numero);
} else {
    console.log(-numero);
}
