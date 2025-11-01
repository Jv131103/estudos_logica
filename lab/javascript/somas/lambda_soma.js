import assert from "node:assert";  // ou const assert = require("node:assert");

// forma curta (expression body)
const soma = (x, y) => x + y;

const valores_e_saidas = [
    [1, 1, 2],
    [4, 5, 9],
    [10, 5, 15],
    [-1, 1, 0],
    [-2, -2, -4],
    [3, 7, 10]
];

for (const valor_e_saida of valores_e_saidas){
    const [x, y, saida] = valor_e_saida;
    const saida_soma = soma(x, y);
    console.log(saida_soma);
    const erro_saida = `SOMA INVÁLIDA: ${x} + ${y} = ${x+y} sua saida foi: ${saida}`;
    assert.strictEqual(saida, saida_soma, erro_saida);
}
