function contar_segmentos(numeros){
    if (numeros.length == 0){
        return 0;
    }

    let segmentos = 1;
    let anterior = numeros[0];

    for (let i=1; i < numeros.length; i++){
        if (numeros[i] != anterior){
            segmentos ++;
            anterior = numeros[i];
        }
    }

    return segmentos;
}


console.log(contar_segmentos([5, 2, 2, 3, 4, 4, 4, 4, 1, 1]));
console.log(contar_segmentos([2, 2, 2, 3, 4, 4, 4, 4, 1, 1]));
