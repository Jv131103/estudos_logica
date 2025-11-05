function nParesBit(n) {
  for (let i = 1; i <= n; i++) {
    if ((i & 1) === 0) {
      console.log(`${i} é PAR`);
    } else {
      console.log(`${i} é ÍMPAR`);
    }
  }
}

function nParesOtherCalc(n) {
  for (let x = 1; x <= n; x++) {
    if (Math.floor(x / 2) * 2 === x) {
      console.log(`${x} é PAR`);
    } else {
      console.log(`${x} é ÍMPAR`);
    }
  }
}

nParesBit(5);
console.log();
nParesOtherCalc(5);
