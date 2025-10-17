function encontrar_posicion(string, value) {
  const lista_posicoes = [];

  if (value.length > 1) {
    let posicao = 0;
    for (let indice = 0; indice < string.length; indice++) {
      if (string[indice].toLowerCase() === value[posicao].toLowerCase()) {
        lista_posicoes.push(indice);
        if (posicao !== value.length - 1) {
          posicao++;
        }
      }
    }
  } else {
    for (let posicao = 0; posicao < string.length; posicao++) {
      if (string[posicao].toLowerCase() === value.toLowerCase()) {
        lista_posicoes.push(posicao);
      }
    }
  }

  if (lista_posicoes.length === 1) {
    return lista_posicoes[0];
  } else if (lista_posicoes.length > 1) {
    return lista_posicoes;
  } else {
    return -1;
  }
}

// -------------------- Testes --------------------

const text = "teste";

let data_posicion = encontrar_posicion(text, "tes");
console.log(data_posicion); // [0, 1, 2]

data_posicion = encontrar_posicion(text, "est");
console.log(data_posicion); // [1, 2, 3]

data_posicion = encontrar_posicion(text, "ste");
console.log(data_posicion); // [2, 3, 4]

data_posicion = encontrar_posicion(text, "x");
console.log(data_posicion); // -1

data_posicion = encontrar_posicion(text, "s");
console.log(data_posicion); // 2

data_posicion = encontrar_posicion(text, "t");
console.log(data_posicion); // [0, 3]
