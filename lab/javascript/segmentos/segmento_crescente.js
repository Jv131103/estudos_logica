function contar_segmentos_ordem_crescente(numeros){
    if (numeros.length == 0){
        return 0;
    }

    let maximo = 1;
    let atual = 1;
    let anterior = numeros[0];

    for (let i=1; i < numeros.length; i++){
        if (numeros[i] > anterior){
            atual ++;
        } else {
            if (atual > maximo){
                maximo = atual;
            }
            atual = 1;
        }

        anterior = numeros[i];
    }
    
    if (atual > maximo){
        maximo = atual;
    }

    return maximo;
}

console.log(contar_segmentos_ordem_crescente([5, 10, 3, 2, 4, 7, 9, 8, 5]))
console.log(contar_segmentos_ordem_crescente([10, 8, 7, 5, 2]))
console.log(contar_segmentos_ordem_crescente([1, 2, 3, 4, 5]))
console.log(contar_segmentos_ordem_crescente([2, 2, 3, 4, 5]))
