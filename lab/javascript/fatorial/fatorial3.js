function fatorial_recursivo(n) {
  if (n === 1 || n === 0) {
    process.stdout.write(`${n} = `);
    return 1;
  }
  process.stdout.write(`${n} x `);
  return n * fatorial_recursivo(n - 1);
}

// Teste
console.log(fatorial_recursivo(5));
