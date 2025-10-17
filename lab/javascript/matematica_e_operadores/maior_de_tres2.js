// Retorna o maior entre três números
function maior_de_tres_normal(a, b, c) {
  if (a >= b && a >= c) {
    return a;
  } else if (b >= a && b >= c) {
    return b;
  } else {
    return c;
  }
}

// Usa "swap" (troca de valores)
function maior_de_tres_com_swap(a, b, c) {
  if (a < b) [a, b] = [b, a]; // troca a e b
  if (a < c) [a, c] = [c, a]; // troca a e c
  return a;
}

// Aceita quantidade variável de números
function maior_interativo(...numeros) {
  if (numeros.length === 0) return null;
  let maior = numeros[0];
  for (let num of numeros.slice(1)) {
    if (num > maior) maior = num;
  }
  return maior;
}

// Função de testes
function testes() {
  const conjuntos = [
    [3, 5, 2],
    [10, 7, 8],
    [1, 1, 1],
    [-1, -5, -3],
    [0, 0, 0],
    [2.5, 2.5, 3.5],
  ];

  for (const [a, b, c] of conjuntos) {
    const normal = maior_de_tres_normal(a, b, c);
    const swap = maior_de_tres_com_swap(a, b, c);
    console.assert(normal === swap);
    console.log(`Maior entre ${a}, ${b}, ${c} é ${normal}`);
  }

  const listas = [
    [3, 5, 2, 8, 1],
    [10, 7, 8, 12, 6],
    [1, 1, 1, 1],
    [-1, -5, -3, -2],
    [0, 0, 0, 0],
    [2.5, 2.5, 3.5, 4.0],
    [],
  ];

  for (const nums of listas) {
    const maior = maior_interativo(...nums);
    console.log(`Maior entre [${nums}] é ${maior}`);
  }
}

testes();
