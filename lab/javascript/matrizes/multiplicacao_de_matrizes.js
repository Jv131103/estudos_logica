function multiplicacao_de_matrizes(mat1, mat2) {
    // Verifica compatibilidade: colunas de mat1 == linhas de mat2
    if (mat1[0].length !== mat2.length) {
        throw new Error(
            "Número de colunas da primeira deve ser igual ao número de linhas da segunda."
        );
    }

    const resultado = [];

    // Percorre cada linha da primeira matriz
    for (let i = 0; i < mat1.length; i++) {
        const linha_resultado = [];

        // Percorre cada coluna da segunda matriz
        for (let j = 0; j < mat2[0].length; j++) {
            let soma = 0;

            // Multiplica elementos correspondentes e soma
            for (let k = 0; k < mat1[0].length; k++) {
                soma += mat1[i][k] * mat2[k][j];
            }

            linha_resultado.push(soma);
        }

        resultado.push(linha_resultado);
    }

    return resultado;
}


// Teste
const m1 = [[1, 2], [3, 4]];
const m2 = [[5, 6], [7, 8]];

console.log(multiplicacao_de_matrizes(m1, m2));
