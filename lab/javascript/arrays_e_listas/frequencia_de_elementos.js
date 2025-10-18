function frequencia1(lista) {
  if (!lista || lista.length === 0) return null;

  const jaFoi = [];
  for (let i of lista) {
    if (jaFoi.includes(i)) continue;

    let cont = 0;
    for (let j = 0; j < lista.length; j++) {
      if (lista[j] === i) cont++;
    }

    console.log(`${i} aparece ${cont}x`);
    jaFoi.push(i);
  }
}

function frequencia2(lista) {
  if (!lista || lista.length === 0) return null;

  const contagem = {};
  for (let i of lista) {
    contagem[i] = (contagem[i] || 0) + 1;
  }

  for (let k in contagem) {
    console.log(`${k} aparece ${contagem[k]}x`);
  }
}

// -------------------- Teste --------------------
const lista = [2, 3, 2, 5, 3, 2];
frequencia1(lista);
console.log();
frequencia2(lista);
