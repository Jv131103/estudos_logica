// -------------------- Funções principais --------------------

function percent(value, percent) {
  return value * percent / 100;
}

function percent2(value, percent = 0.5) { // 0.5 = 50%
  return value * percent;
}

function discount(value, discount) {
  return value - (value * discount / 100);
}

function discount_decimal(value, discount = 0.5) {
  return value - (value * discount);
}

function discount_factor(value, discount) {
  return value * (1 - discount / 100);
}

function discount_chain(value, ...discounts) {
  for (let d of discounts) {
    value *= (1 - d / 100);
  }
  return value;
}

function increase(value, percent) {
  return value + (value * percent / 100);
}

function increase_decimal(value, discount = 0.5) {
  return value + (value * discount);
}

function increase_factor(value, percent) {
  return value * (1 + percent / 100);
}

function increase_chain(value, ...percents) {
  for (let p of percents) {
    value *= (1 + p / 100);
  }
  return value;
}

// -------------------- Testes --------------------

console.log(percent(200, 15));            // 30
console.log(percent2(200, 0.15));         // 30
console.log(discount(250, 20));           // 200
console.log(discount_factor(250, 20));    // 200
console.log(discount_decimal(250, 0.20)); // 200
console.log(increase(200, 10));           // 220
console.log(increase_factor(200, 10));    // 220
console.log(increase_decimal(200, 0.10)); // 220
console.log(discount_chain(100, 20, 10)); // 72
console.log(increase_chain(100, 10, 20)); // 132
