function inverter_numero(number) {
  let inverso = 0;
  while (number > 0) {
    const resto = number % 10;
    inverso = inverso * 10 + resto;
    number = Math.floor(number / 10);
  }
  return inverso;
}

function is_palindromo(number) {
  if (typeof number !== "number" || !Number.isInteger(number)) {
    return false;
  }
  number = Math.abs(number);
  return number === inverter_numero(number);
}

function main() {
  const numbers = [121, 242, 123, 321, 645, 111, 9999, 1000, -98, -989, "teste"];
  for (const number of numbers) {
    console.log(
      `${number} -> ${is_palindromo(number) ? "Palíndromo" : "Não é palíndromo"}`
    );
  }
}

main();
