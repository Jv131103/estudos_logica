function media1(...valores) {
  if (valores.length === 0) return null;
  const soma = valores.reduce((a, b) => a + b, 0);
  return soma / valores.length;
}

function media2(valores) {
  if (!Array.isArray(valores) || valores.length === 0) return null;
  const soma = valores.reduce((a, b) => a + b, 0);
  return soma / valores.length;
}

function media3(valores) {
  if (!Array.isArray(valores) || valores.length === 0) return null;

  let soma = 0;
  for (let valor of valores) {
    soma += valor;
  }
  return soma / valores.length;
}

function media4(valores) {
  if (!Array.isArray(valores) || valores.length === 0) return null;

  let soma = 0;
  for (let valor of valores) {
    soma += valor;
  }

  let total = 0;
  for (let _ of valores) {
    total += 1;
  }

  return soma / total;
}

// -------------------- Teste --------------------
const lista = [10, 20, 30];
console.log(media1(...lista)); // 20
console.log(media2(lista));    // 20
console.log(media3(lista));    // 20
console.log(media4(lista));    // 20
