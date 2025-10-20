function diagonal_principal(matriz){
    let soma = 0;

    for (let i=0; i < matriz.length; i++){
        for (let j=0; j < matriz.length; j++){
            if (i === j){
                soma += matriz[i][j];
            }
        }
    }

    return soma;
}


console.log(diagonal_principal([[1, 2], [3, 4]]));
console.log(diagonal_principal([[1, 2, 3], [4, 5, 6], [7, 8, 9]]));
