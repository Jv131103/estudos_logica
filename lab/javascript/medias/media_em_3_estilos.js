// Procedural
function media(a, b, c) {
  return (a + b + c) / 3;
}

// OO
class Calculadora {
  constructor(a, b, c) {
    this.a = a; this.b = b; this.c = c;
  }
  media() {
    return (this.a + this.b + this.c) / 3;
  }
}

// Funcional
const functionalMedia = (...vals) =>
  vals.reduce((acc, x) => acc + x, 0) / vals.length;


const prompt = require('prompt-sync')();
let a = parseFloat(prompt("Digite o valor de a: "));
let b = parseFloat(prompt("Digite o valor de b: "));
let c = parseFloat(prompt("Digite o valor de c: "));


console.log(media(a, b, c).toFixed(2)); // toFixed representa a formatação de casas decimais
console.log(new Calculadora(a, b, c).media().toFixed(2));  // Forma de definir objetos
console.log(functionalMedia(a, b, c).toFixed(2));
