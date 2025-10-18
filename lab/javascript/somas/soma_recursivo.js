function soma_recursiva(n) {
  n = Math.abs(n); // valor absoluto

  if (n === 0) {
    return 0;
  }
  return n + soma_recursiva(n - 1);
}

// Teste
console.log(soma_recursiva(5));   // 15
console.log(soma_recursiva(-5));  // 15
