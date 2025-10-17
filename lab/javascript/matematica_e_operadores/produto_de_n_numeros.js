const prompt = require("prompt-sync")({ sigint: true });

// Versão 1 — normal
function produto_de_n_numeros(n) {
  let produto = 1;
  for (let i = 0; i < n; i++) {
    let numero = parseFloat(prompt(`Digite o número ${i + 1}: `));
    produto *= numero;
  }
  return produto;
}

// Versão 2 — comprimida
function produto_de_n_numeros_comprimido(n) {
  let produto = 1;
  for (let i = 0; i < n; i++) {
    produto *= parseFloat(prompt(`Digite o número ${i + 1}: `));
  }
  return produto;
}

console.log(produto_de_n_numeros(3));
console.log(produto_de_n_numeros_comprimido(3));
