const prompt = require('prompt-sync')();

// lê "linhas colunas"
const [linhas, colunas] = prompt().trim().split(/\s+/).map(Number);

// lê a matriz
const matriz = [];
for (let i = 0; i < linhas; i++) {
  const valores = prompt().trim().split(/\s+/).map(Number); // sem os colchetes!
  matriz.push(valores);
}

// imprime a transposta
for (let j = 0; j < colunas; j++) {
  const linha = [];
  for (let i = 0; i < linhas; i++) {
    linha.push(matriz[i][j]);
  }
  console.log(linha.join(" "));
}
