function decimal_to_binarie(numero) {
  if (numero === 0) return "";
  const resto = numero % 2;
  return decimal_to_binarie(Math.floor(numero / 2)) + resto.toString();
}

function decimal_to_binarie2(numero, prefix = true) {
  if (numero === 0) return prefix ? "0b0" : "0";

  function rec(x) {
    if (x === 0) return "";
    return rec(Math.floor(x / 2)) + (x % 2).toString();
  }

  const bits = rec(Math.abs(numero));
  return prefix ? "0b" + bits : bits;
}

// Testes
let numero = 13;
let resultado = decimal_to_binarie(numero);
console.log(`${numero} -> ${resultado || "0"}`);

numero = 10;
resultado = decimal_to_binarie2(numero);
console.log(`${numero} -> ${resultado || "0"}`);
