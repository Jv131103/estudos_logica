function is_perfect(n) {
  if (n <= 1) return false;
  let soma = 0;
  for (let i = 1; i < n; i++) {
    if (n % i === 0) soma += i;
  }
  return soma === n;
}

function is_perfect_eficient(n) {
  if (n <= 1) return false;

  let soma = 1; // 1 é divisor de todo número > 1
  const raiz = Math.floor(Math.sqrt(n));

  for (let i = 2; i <= raiz; i++) {
    if (n % i === 0) {
      soma += i;
      if (i !== n / i) soma += n / i; // evita duplicar divisores
    }
  }

  return soma === n;
}

const numbers = [5, 6, 7, 8, 20, 24, 28, 400, 480, 496, 8000, 8128, 33550336];

for (const number of numbers) {
  console.log(`${number}: ${is_perfect_eficient(number) ? "Perfeito" : "Não perfeito"}`);
}
