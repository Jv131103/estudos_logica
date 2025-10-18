function contagemDeVogais(texto) {
  const vogais = "aeiouãẽĩõũáéíóúàèìòùâêîôû";
  let contador = 0;

  for (const letra of texto.toLowerCase()) {
    if (vogais.includes(letra)) {
      contador++;
    }
  }
  return contador;
}

function contagemVogaisVersaoRegex(texto) {
  // Expressão que detecta vogais com e sem acento
  const padrao = /[aeiouãẽĩõũáéíóúàèìòùâêîôûAEIOUÃẼĨÕŨÁÉÍÓÚÀÈÌÒÙÂÊÎÔÛ]/g;
  const vogais = texto.match(padrao);
  return vogais ? vogais.length : 0;
}

// Testes
console.log(contagemDeVogais("Programação"));
console.log(contagemVogaisVersaoRegex("Programação"));
