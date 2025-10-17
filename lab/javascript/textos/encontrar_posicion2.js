function encontrar_posicion(string, value) {
  string = string.toLowerCase();
  value = value.toLowerCase();

  const posicoes = [];

  for (let i = 0; i <= string.length - value.length; i++) {
    if (string.slice(i, i + value.length) === value) {
      posicoes.push(i);
    }
  }

  if (posicoes.length === 0) return -1;
  else if (posicoes.length === 1) return posicoes[0];
  else return posicoes;
}

// -------------------- Testes --------------------
const text = "teste";
console.log(encontrar_posicion(text, "tes")); // [0]
console.log(encontrar_posicion(text, "est")); // [1]
console.log(encontrar_posicion(text, "ste")); // [2]
console.log(encontrar_posicion(text, "x"));   // -1
console.log(encontrar_posicion(text, "s"));   // [2]
console.log(encontrar_posicion(text, "t"));   // [0, 4]
