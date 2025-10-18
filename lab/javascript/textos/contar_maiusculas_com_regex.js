function contar_maiusculas(string) {
  // A-Z cobre letras latinas; À-Ý cobre maiúsculas acentuadas (Unicode básico latino)
  const matches = string.match(/[A-ZÀ-Ý]/g);
  return matches ? matches.length : 0;
}

// Teste
console.log(contar_maiusculas("Eu Gosto de Programar em Python"));
