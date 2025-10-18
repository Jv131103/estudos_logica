function encontrar_palavras_especificas(string, palavra) {
  // Cria uma regex dinâmica que encontra palavras que começam com "palavra"
  const regex = new RegExp(`\\b${palavra}\\w*`, "gi");
  const resultado = string.match(regex);
  return resultado || [];
}

// -------------------- Teste --------------------
const frase = "Eu gosto de programação e projetos produtivos";
const resultado = encontrar_palavras_especificas(frase, "pro");
console.log(resultado);
