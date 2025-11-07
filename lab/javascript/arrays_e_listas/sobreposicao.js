// Normaliza um intervalo [a,b] -> [min, max]
function norm([a, b]) {
  return a <= b ? [a, b] : [b, a];
}

// 1) Dois intervalos se sobrepõem? (conta "encostar" como sobreposição)
function intervalosSobrepostos(i1, i2) {
  const [a, b] = norm(i1);
  const [c, d] = norm(i2);
  return !(b < c || d < a);
}

// 2) Algum de l1 sobrepõe algum de l2?
function listasTemSobreposicao(l1, l2) {
  for (const i1 of l1) {
    for (const i2 of l2) {
      if (intervalosSobrepostos(i1, i2)) return true;
    }
  }
  return false;
}

// 3) Mesclar intervalos
function mesclarIntervalos(intervalos) {
  if (intervalos.length === 0) return [];
  // normaliza cada intervalo
  const normed = intervalos.map(norm);
  // ordena por início
  normed.sort((x, y) => x[0] - y[0]);

  const res = [normed[0].slice()];
  for (let i = 1; i < normed.length; i++) {
    const [ini, fim] = normed[i];
    const last = res[res.length - 1];
    if (ini <= last[1]) {
      // sobrepõe → estende o fim
      last[1] = Math.max(last[1], fim);
    } else {
      res.push([ini, fim]);
    }
  }
  return res;
}

// --- Exemplos rápidos ---
console.log(intervalosSobrepostos([1,5],[4,9]));   // true
console.log(intervalosSobrepostos([1,5],[6,10]));  // false
console.log(listasTemSobreposicao([[1,3],[10,20]], [[2,5],[30,40]])); // true
console.log(mesclarIntervalos([[1,3],[2,6],[8,10],[9,11]])); // [[1,6],[8,11]]
