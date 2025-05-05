function pares_ordenados(lista){
    let ordenados = [];

    for (let i=0; i < lista.length; i++){
        for (let j=i + 1; j < lista.length; j++){
            ordenados.push([lista[i], lista[j]]);
        }
    }

    return ordenados;

}

lista = [1, 2, 3, 4]
console.log(pares_ordenados(lista));
