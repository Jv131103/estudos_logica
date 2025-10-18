function contarCaracteres1(string, caracter) {
  if (!caracter || caracter.length !== 1) {
    throw new Error("O argumento 'caracter' deve conter apenas um caractere.");
  }
  string = string.toLowerCase();
  caracter = caracter.toLowerCase();
  let ocorrencias = 0;

  for (const c of string) {
    if (c === caracter) ocorrencias++;
  }
  return ocorrencias;
}

function contarCaracteres2(string, caracter) {
  if (!caracter || caracter.length !== 1)
    throw new Error("O argumento 'caracter' deve conter apenas um caractere.");
  return string.toLowerCase().split(caracter.toLowerCase()).length - 1;
}

function contarCaracteres3(string, caracter) {
  // Regex com acentos
  const padrao = new RegExp(`[${caracter}áàâãäÁÀÂÃÄ]`, "g");
  const encontrados = string.match(padrao);
  return encontrados ? encontrados.length : 0;
}

function contarCaracteres4(string, caracter) {
  let cont = 0;
  const alvo = caracter.toLowerCase();
  for (const c of string.toLowerCase()) {
    if (c === alvo) cont++;
  }
  return cont;
}

// ---- Testes ----
console.log(contarCaracteres1("abacaxi", "a"));
console.log(contarCaracteres2("abacaxi", "a"));
console.log(contarCaracteres3("abacaxi", "a"));
console.log(contarCaracteres4("abacaxi", "a"));
