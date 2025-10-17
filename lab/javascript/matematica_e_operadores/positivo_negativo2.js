function classificar_numero(numero) {
  if (numero === 0) {
    return "Zero";
  } else if (numero > 0) {
    return "Positivo";
  } else {
    return "Negativo";
  }
}

const numeros = [-8, 0, 10, -3.14, 2.7];

for (let n of numeros) {
  console.log(`${n}: ${classificar_numero(n)}`);
}
