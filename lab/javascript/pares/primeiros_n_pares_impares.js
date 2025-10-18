function primeiros_impares(n) {
  let cont = 1;
  let impares = 1;
  const lista_impares = [];

  while (cont <= n) {
    lista_impares.push(impares);
    impares += 2;
    cont++;
  }

  return lista_impares;
}

function primeiros_pares(n) {
  let cont = 1;
  let pares = 2;
  const lista_pares = [];

  while (cont <= n) {
    lista_pares.push(pares);
    pares += 2;
    cont++;
  }

  return lista_pares;
}

function primeiros(n) {
  if (!Number.isInteger(n)) {
    throw new Error("n deve ser do tipo int");
  }

  n = Math.abs(n);

  console.log("Pares:", primeiros_pares(n).join(" "));
  console.log("Ímpares:", primeiros_impares(n).join(" "));
}

// -------------------- Teste --------------------
primeiros(4);
