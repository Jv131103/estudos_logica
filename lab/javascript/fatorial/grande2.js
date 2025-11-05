// Fatorial com BigInt nativo
function fatPlanoA(n) {
  if (n < 0) throw new RangeError("Fatorial não é definido para n < 0.");
  if (n <= 1) return 1n;
  let acc = 1n;
  for (let k = 2n; k <= BigInt(n); k++) {
    acc *= k;
  }
  return acc;
}

// Exemplo
console.log(String(fatPlanoA(10))); // "3628800"


// Fatorial "caseiro" sem BigInt (usa Number com base em blocos)
function fatPlanoB(n, base = 1e6) {
  if (n < 0) throw new RangeError("Fatorial não é definido para n < 0.");
  if (n <= 1) return "1";

  // número inicial = 1 em chunks (LSB-first)
  const chunks = [1]; // cada chunk em [0, base)

  function mulSmall(k) {
    let carry = 0;
    for (let i = 0; i < chunks.length; i++) {
      const prod = chunks[i] * k + carry;     // tudo em Number
      chunks[i] = prod % base;                // resto do bloco
      carry = Math.floor(prod / base);        // "vai um"
    }
    while (carry > 0) {
      chunks.push(carry % base);
      carry = Math.floor(carry / base);
    }
  }

  for (let k = 2; k <= n; k++) mulSmall(k);

  // Formatar para string decimal
  const width = String(base).length - 1; // dígitos por bloco
  let out = String(chunks[chunks.length - 1]);
  for (let i = chunks.length - 2; i >= 0; i--) {
    out += String(chunks[i]).padStart(width, "0");
  }
  return out;
}

// Exemplos
console.log(fatPlanoB(10));   // "3628800"

// Validação leve (moderado): comparar com BigInt para n pequeno/médio
function fatBigIntStr(n){ return String(fatPlanoA(n)); }
for (const x of [0,1,5,10,50,100]) {
  console.log(x, fatPlanoB(x) === fatBigIntStr(x));
}

