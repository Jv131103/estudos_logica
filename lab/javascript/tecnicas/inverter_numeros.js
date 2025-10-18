function inverter_numeros1(numero) {
  const negativo = numero < 0;
  const inverso = Math.abs(numero).toString().split("").reverse().join("");
  return negativo ? -parseInt(inverso) : parseInt(inverso);
}

function inverter_numeros2(numero) {
  const negativo = numero < 0;
  numero = Math.abs(numero);
  let inverso = 0;

  while (numero > 0) {
    const resto = numero % 10;
    inverso = inverso * 10 + resto;
    numero = Math.floor(numero / 10);
  }

  return negativo ? -inverso : inverso;
}

// -------------------- Teste --------------------
console.log(inverter_numeros1(1234));
console.log(inverter_numeros2(1234));
console.log();
console.log(inverter_numeros1(-1234));
console.log(inverter_numeros2(-1234));
console.log();
console.log(inverter_numeros1(0));
console.log(inverter_numeros2(0));
console.log();
console.log(inverter_numeros1(1000));
console.log(inverter_numeros2(1000));
