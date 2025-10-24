function toBaseN(number, base) {
  const digits = "0123456789ABCDEF";
  if (number === 0) return "0";
  let result = "";

  while (number > 0) {
    let resto = number % base;
    result = digits[resto] + result;
    number = Math.floor(number / base);
  }

  return result;
}

console.log(toBaseN(25, 2));   // 11001
console.log(toBaseN(25, 3));   // 221
console.log(toBaseN(255, 16)); // FF
console.log(toBaseN(100, 8));  // 144
