function multiplicaVetorPorInteiro(vetor, k) {
  let carry = 0;
  for (let i = 0; i < vetor.length; i++) {
    let produto = vetor[i] * k + carry;
    vetor[i] = produto % 10;
    carry = Math.floor(produto / 10);
  }
  // drena o carry
  while (carry > 0) {
    vetor.push(carry % 10);
    carry = Math.floor(carry / 10);
  }
}

function bigFatorial(n) {
  if (n === 0 || n === 1) return [1];
  const resultado = [1];

  for (let multiplicador = 2; multiplicador <= n; multiplicador++) {
    multiplicaVetorPorInteiro(resultado, multiplicador);
  }

  return resultado; // ainda invertido
}

// Exemplo: 10!
const fat = bigFatorial(10);
console.log(fat.reverse().join('')); // 3628800
