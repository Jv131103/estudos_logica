function busca_item_matriz(matriz, valor){
    // Se a matriz for vazia, ele retorna false
    if (matriz.length === 0){
        return false;
    }

    for (let linha=0; linha < matriz.length; linha++){
        for (let coluna=0; coluna < matriz.length; coluna++){
            if (matriz[linha][coluna] == valor){
                return true;
            }
        }
    }

    return false;
}


const testes = [
    {"matriz": [[1, 2], [3, 4]], "valor": 3},
    {"matriz": [[1, 2], [3, 4]], "valor": 7}
]

for (const teste of testes){
    if (busca_item_matriz(teste.matriz, teste.valor)){
        console.log("Encontrado");
    } else {
        console.log("Não encontrado");
    }
}
