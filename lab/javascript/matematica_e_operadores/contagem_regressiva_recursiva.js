function contagem_recursiva(n) {
  if (n === 1) {
    console.log(n);
    return n;
  }
  process.stdout.write(n + " ");
  return n - contagem_recursiva(n - 1);
}

function contagem_recursiva2(n) {
  if (n === 0) {
    return;
  }
  process.stdout.write(n + " ");
  contagem_recursiva(n - 1);
}

// Testes
contagem_recursiva(5);
contagem_recursiva2(5);
