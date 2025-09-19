function somaListasNormal(a, b) {
    return a.map((x, i) => x + b[i]);
}

function somaListasInplace(a, b) {
    for (let i = 0; i < b.length; i++) {
        a[i] += b[i];
    }
    return a;
}

function somaMatrizesNormal(M1, M2) {
    return M1.map((linha, i) => linha.map((x, j) => x + M2[i][j]));
}

function somaMatrizesInplace(M1, M2) {
    for (let i = 0; i < M1.length; i++) {
        for (let j = 0; j < M1[i].length; j++) {
            M1[i][j] += M2[i][j];
        }
    }
    return M1;
}

// Teste listas
let A = [1, 2, 3];
let B = [10, 20, 30];
console.log("SOMA LISTAS NORMAL:", somaListasNormal(A, B), "A:", A, "B:", B);
A = [1, 2, 3];
somaListasInplace(A, B);
console.log("SOMA LISTAS IN-PLACE:", A, "B:", B);

// Teste inverter
let L = [1, 2, 3, 4];
let R = [...L].reverse();
console.log("INVERTER NORMAL:", "L:", L, "R:", R);

L = [1, 2, 3, 4];
let i = 0, j = L.length - 1;
while (i < j) {
    [L[i], L[j]] = [L[j], L[i]];
    i++; j--;
}
console.log("INVERTER IN-PLACE:", "L:", L);

// Teste matrizes
let M1 = [[1, 2], [3, 4]];
let M2 = [[5, 6], [7, 8]];
console.log("SOMA MATRIZES NORMAL:", somaMatrizesNormal(M1, M2));
M1 = [[1, 2], [3, 4]];
somaMatrizesInplace(M1, M2);
console.log("SOMA MATRIZES IN-PLACE:", M1);
