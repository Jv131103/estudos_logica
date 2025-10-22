// Versão 1 – simples com slice
function versao1(lista, k = 1) {
  k = k % lista.length;
  const ultimos = lista.slice(-k);
  const restantes = lista.slice(0, -k);
  console.log([...ultimos, ...restantes]);
}


// Versão 2 – com loops (sem slice)
function versao2(lista, k = 1) {
  const n = lista.length;
  k = k % n;

  const ultimos = [];
  for (let i = n - k; i < n; i++) {
    ultimos.push(lista[i]);
  }

  const restantes = [];
  for (let j = 0; j < n - k; j++) {
    restantes.push(lista[j]);
  }

  console.log([...ultimos, ...restantes]);
}


// Versão 3 – índice modular
function versao3(lista, k = 1) {
  const n = lista.length;
  const novo = new Array(n);
  k = k % n;

  for (let i = 0; i < n; i++) {
    const novaPos = (i + k) % n;
    novo[novaPos] = lista[i];
  }

  console.log(novo);
}


// Teste
versao1([1, 2, 3, 4], 1);
versao2([1, 2, 3, 4], 2);
versao3([1, 2, 3, 4], 3);
