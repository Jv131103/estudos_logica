// Versão 1 — simples
function quadrado_asteriscos(n) {
  for (let i = 0; i < n; i++) {
    console.log("*".repeat(n));
  }
}

// Versão 2 — "longa" (construindo linha)
function quadrado_asterisco_longo(n) {
  for (let i = 0; i < n; i++) {
    let linha = "";
    for (let j = 0; j < n; j++) {
      linha += "*";
    }
    console.log(linha);
  }
}

// Versão 3 — aninhada (igual à do Python "versao_C")
function quadrado_asterisco_versao_C(n) {
  for (let i = 0; i < n; i++) {
    let linha = "";
    for (let j = 0; j < n; j++) {
      linha += "*";
    }
    console.log(linha);
  }
}

quadrado_asteriscos(3);
console.log();
quadrado_asterisco_longo(3);
console.log();
quadrado_asterisco_versao_C(3);
