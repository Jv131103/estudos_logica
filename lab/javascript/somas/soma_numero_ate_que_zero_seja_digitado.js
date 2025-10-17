const prompt = require("prompt-sync")({ sigint: true });

// Versão 1 — com while True
function soma_numeros() {
  let soma = 0;
  while (true) {
    let numero = parseFloat(prompt("Digite um número (0 para parar): "));
    if (numero === 0) break;
    soma += numero;
  }
  return soma;
}

// Versão 2 — comprimida
function soma_numeros_comprimido() {
  let soma = 0;
  let numero = parseFloat(prompt("Digite um número (0 para parar): "));
  while (numero !== 0) {
    soma += numero;
    numero = parseFloat(prompt("Digite um número (0 para parar): "));
  }
  return soma;
}

console.log(soma_numeros());
console.log(soma_numeros_comprimido());
