// Para rodar no Node: primeiro instale o pacote com:
// npm install prompt-sync
const prompt = require("prompt-sync")({ sigint: true });

function media_de_n_notas(n) {
  let soma = 0;
  for (let i = 0; i < n; i++) {
    let nota = parseFloat(prompt(`Nota ${i + 1}: `));
    if (nota < 0 || nota > 10) return "nota inválida";
    soma += nota;
  }
  return soma / n;
}

function media_de_n_notas_comprimido(n) {
  let soma = 0;
  for (let i = 0; i < n; i++) {
    let nota = parseFloat(prompt(`Nota ${i + 1}: `));
    if (nota < 0 || nota > 10) return "nota inválida";
    soma += nota;
  }
  return soma / n;
}

function media_de_n_notas_lista(n) {
  const notas = [];
  for (let i = 0; i < n; i++) {
    let nota = parseFloat(prompt(`Nota ${i + 1}: `));
    if (nota < 0 || nota > 10) return "nota inválida";
    notas.push(nota);
  }
  const soma = notas.reduce((acc, v) => acc + v, 0);
  return soma / n;
}

function media_de_n_notas_lista_comprimido(n) {
  const notas = [];
  for (let i = 0; i < n; i++) {
    notas.push(parseFloat(prompt(`Nota ${i + 1}: `)));
  }
  if (notas.some(nota => nota < 0 || nota > 10)) return "nota inválida";
  const soma = notas.reduce((acc, v) => acc + v, 0);
  return soma / n;
}

console.log("Média:", media_de_n_notas(4));
console.log("Média:", media_de_n_notas_comprimido(4));
console.log("Média:", media_de_n_notas_lista(4));
console.log("Média:", media_de_n_notas_lista_comprimido(4));
