function soma(n1, n2) {
  return n1 + n2;
}

// Lista de testes: [n1, n2, resultado esperado]
const testes = [
  [2, 2, 4],
  [-3, 2, -1],
  [198, 12, 210],
  [3, 7, 10]
];

for (const [n1, n2, esperado] of testes) {
  const resultado = soma(n1, n2);
  console.log(`${n1} + ${n2} = ${resultado}`);

  console.assert(
    resultado === esperado,
    `Erro: esperado ${esperado}, obtido ${resultado}`
  );
}

console.log("✅ Todos os testes passaram!");
