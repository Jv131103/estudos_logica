function perimetro_quadrado(lado){
    return 4 * lado;
}


const prompt = require('prompt-sync')();
let n = Number(prompt());
console.log(perimetro_quadrado(n));
