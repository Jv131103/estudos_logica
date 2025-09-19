function somaMatrizes(m1, m2) {
    if (m1.length !== m2.length || m1[0].length !== m2[0].length) {
        throw new Error("Matrizes precisam ter o mesmo tamanho");
    }

    let m3 = [];
    for (let i = 0; i < m1.length; i++) {
        let linha = [];
        for (let j = 0; j < m1[i].length; j++) {
            linha.push(m1[i][j] + m2[i][j]);
        }
        m3.push(linha);
    }
    return m3;
}

function somaMatrizesZip(m1, m2) {
    return m1.map((linha, i) => linha.map((val, j) => val + m2[i][j]));
}

// versão in-place
function somaMatrizesInplace(m1, m2) {
    for (let i = 0; i < m1.length; i++) {
        for (let j = 0; j < m1[i].length; j++) {
            m1[i][j] += m2[i][j];
        }
    }
    return m1;
}

let M1 = [
  [1, 2],
  [3, 4]
];
let M2 = [
  [5, 6],
  [7, 8]
];

console.log("M3 =", somaMatrizes(M1, M2));
console.log("Zip =", somaMatrizesZip(M1, M2));
console.log("Inplace =", somaMatrizesInplace([[1,2],[3,4]], M2)); // cópia manual
