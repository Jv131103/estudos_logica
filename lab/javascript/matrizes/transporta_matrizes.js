// Transposta com loops (robusta e explícita)
function transpose(matrix) {
  if (!Array.isArray(matrix) || matrix.length === 0) return [];
  const rows = matrix.length;
  const cols = matrix[0].length;

  // valida se é "retangular"
  for (const row of matrix) {
    if (!Array.isArray(row) || row.length !== cols) {
      throw new Error("Matriz inválida: linhas com comprimentos diferentes");
    }
  }

  const result = Array.from({ length: cols }, () => Array(rows).fill(0));
  for (let i = 0; i < rows; i++) {
    for (let j = 0; j < cols; j++) {
      result[j][i] = matrix[i][j];
    }
  }
  return result;
}

// Transposta "pythonica" com map
function transposeMap(matrix) {
  if (!Array.isArray(matrix) || matrix.length === 0) return [];
  const cols = matrix[0].length;
  return Array.from({ length: cols }, (_, j) => matrix.map(row => row[j]));
}

// Exemplo 2x3 -> 3x2
const M = [
  [1, 2, 3],
  [4, 5, 6]
];

console.log("Original:", M);
console.log("Transposta (loops):", transpose(M));
console.log("Transposta (map):  ", transposeMap(M));
