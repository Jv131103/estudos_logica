function extrair_digitos(texto) {
  const numeros = texto.match(/\d+/g); // encontra todos os blocos de dígitos
  return numeros ? numeros.join("") : "";
}

// -------------------- Testes --------------------
console.log(extrair_digitos("abc123def45"));           // 12345
console.log(extrair_digitos("telefone: (11) 98877-2233")); // 11988772233
console.log(extrair_digitos("sem números aqui"));       // ""
