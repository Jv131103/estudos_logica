const prompt = require("prompt-sync")({ sigint: true });

// Versão 1 — normal
function maior_valor_lido(qtd) {
  let maior = parseFloat(prompt("Digite um valor: "));
  for (let i = 0; i < qtd - 1; i++) {
    let valor = parseFloat(prompt("Digite um valor: "));
    if (valor > maior) {
      maior = valor;
    }
  }
  return maior;
}

// Versão 2 — comprimida
function maior_valor_lido_comprimido(qtd) {
  let maior = parseFloat(prompt("Digite um valor: "));
  for (let i = 0; i < qtd - 1; i++) {
    let valor = parseFloat(prompt("Digite um valor: "));
    maior = valor > maior ? valor : maior;
  }
  return maior;
}

// Versão 3 — usando lista (array)
function maior_valor_lido_lista(qtd) {
  const valores = [];
  for (let i = 0; i < qtd; i++) {
    let valor = parseFloat(prompt("Digite um valor: "));
    valores.push(valor);
  }

  let maior = valores[0];
  for (let valor of valores) {
    if (valor > maior) {
      maior = valor;
    }
  }

  return maior;
}

console.log("Maior =", maior_valor_lido(5));
console.log("Maior =", maior_valor_lido_comprimido(5));
console.log("Maior =", maior_valor_lido_lista(5));
