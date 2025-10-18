function maior_e_menor(...valores) {
  console.log(`Maior = ${Math.max(...valores)}`);
  console.log(`Menor = ${Math.min(...valores)}`);
}

function maior_e_menor2(valores) {
  if (!Array.isArray(valores)) {
    console.log("Tipo de dado inválido!");
  } else if (valores.length === 0) {
    console.log("Vazio!");
  } else {
    console.log(`Maior = ${Math.max(...valores)}`);
    console.log(`Menor = ${Math.min(...valores)}`);
  }
}

function maior_e_menor3(valores) {
  if (!Array.isArray(valores)) {
    console.log("Tipo de dado inválido!");
  } else if (valores.length === 0) {
    console.log("Vazio!");
  } else {
    let maior = valores[0];
    let menor = valores[0];
    for (let i = 1; i < valores.length; i++) {
      if (valores[i] > maior) maior = valores[i];
      else if (valores[i] < menor) menor = valores[i];
    }
    console.log(`Maior = ${maior}`);
    console.log(`Menor = ${menor}`);
  }
}

function maior_e_menor4(valores) {
  if (!Array.isArray(valores)) {
    console.log("Tipo de dado inválido!");
  } else if (valores.length === 0) {
    console.log("Vazio!");
  } else {
    const ordenada = [...valores].sort((a, b) => a - b);
    const menor = ordenada[0];
    const maior = ordenada[ordenada.length - 1];
    console.log(`Maior = ${maior}`);
    console.log(`Menor = ${menor}`);
  }
}

// -------------------- Testes --------------------
maior_e_menor(3, 8, 1, 9, 2);
console.log();
maior_e_menor2([3, 8, 1, 9, 2]);
console.log();
maior_e_menor3([3, 8, 1, 9, 2]);
console.log();
maior_e_menor4([3, 8, 1, 9, 2]);
