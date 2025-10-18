function isDigit(value) {
  // se já for tipo numérico (number), é SIM
  if (typeof value === "number") return "SIM";

  // tenta converter valores do tipo objeto Number ou complexos (simulados)
  if (value instanceof Number) return "SIM";

  // força para string e remove espaços
  const str = String(value).trim();

  // Regex: aceita inteiros e decimais com ponto ou vírgula
  const pattern = /^-?\d+(?:[.,]\d+)?$/;

  return pattern.test(str) ? "SIM" : "NÃO";
}

// Testes
console.log(isDigit("12345"));      // SIM
console.log(isDigit(12345));        // SIM
console.log(isDigit("-12345"));     // SIM
console.log(isDigit("12345.5"));    // SIM
console.log(isDigit("12345,5"));    // SIM
console.log(isDigit("  12345 "));   // SIM
console.log(isDigit("123a45"));     // NÃO
console.log(isDigit("-123a45"));    // NÃO
console.log(isDigit("-12 345"));    // NÃO
console.log(isDigit("abcde"));      // NÃO
console.log(isDigit("-abcde"));     // NÃO
