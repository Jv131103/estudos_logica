function matriz_simetrica(matriz){
    for (let linha=0; linha < matriz.length; linha++){
        for (let coluna=0; coluna < matriz.length; coluna++){
            if (matriz[linha][coluna] != matriz[coluna][linha]){
                return "Não Simétrica";
            }
        }
    }
    return "Simétrica";
}


const A = [
  [1, 2],
  [2, 1]
]
console.log(matriz_simetrica(A))

const B = [
  [1, 3],
  [2, 1]
]
console.log(matriz_simetrica(B))

const C = [
  [1, 5, 7],
  [5, 2, 3],
  [7, 3, 9]
]
console.log(matriz_simetrica(C))
