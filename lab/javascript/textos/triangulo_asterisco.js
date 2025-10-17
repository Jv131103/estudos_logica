// Versão 1
function triangulo_asterisco(n) {
  for (let i = 1; i <= n; i++) {
    console.log("*".repeat(i));
  }
}

// Versão 2
function triangulo_asterisco2(n) {
  for (let i = 1; i <= n; i++) {
    let linha = "";
    for (let j = 0; j < i; j++) {
      linha += "*";
    }
    console.log(linha);
  }
}

// Versão 3
function triangulo_asterisco3(n) {
  for (let i = 1; i <= n; i++) {
    let linha = "";
    for (let j = 0; j < i; j++) {
      linha += "*";
    }
    console.log(linha);
  }
}

// Versão 4
function triangulo_asterisco4(n) {
  let x = "*";
  for (let i = 1; i <= n; i++) {
    console.log(x);
    x += "*";
  }
}

triangulo_asterisco(5);
console.log();
triangulo_asterisco2(5);
console.log();
triangulo_asterisco3(5);
console.log();
triangulo_asterisco4(5);
