function contarPalavras1(texto) {
  return texto.trim().split(/\s+/).filter(Boolean).length;
}

function contarPalavras2(texto) {
  texto = texto.trim();
  if (texto.length === 0) return 0;

  let cont = 1;
  let anterior = "";

  for (const ch of texto) {
    // considera o espaço como separador de palavras
    if (ch === " " && anterior !== " ") {
      cont++;
    }
    anterior = ch;
  }
  return cont;
}

function contarPalavras3(texto) {
  // \w+ encontra blocos de caracteres alfanuméricos (Unicode)
  const palavras = texto.trim().match(/\w+/gu);
  return palavras ? palavras.length : 0;
}

// Testes
const testes = [
  "Eu gosto de estudar programação",
  "Olá",
  "Olá Mundo",
  "",
  "   "
];

for (const t of testes) {
  console.log(contarPalavras1(t));
  console.log(contarPalavras2(t));
  console.log(contarPalavras3(t));
  console.log();
}
