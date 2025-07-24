function contar_ocorrencias_recursivo(lista, valor, i=0){
    if (lista.length == i){
        return 0;
    }
    if (lista[i] == valor){
        return 1 + contar_ocorrencias_recursivo(lista, valor, i + 1);
    } else {
        return contar_ocorrencias_recursivo(lista, valor, i + 1);
    }
}


function contar_ocorrencias_linear(lista, valor){
    let contador = 0;
    if (!Array.isArray(lista)){
        return 0;
    }
    for (let i=0; i < lista.length; i++){
        if (lista[i] == valor){
            contador ++;
        }
    }
    return contador;
}


lista = [1, 2, 3, 3, 4, 5];
console.log(contar_ocorrencias_recursivo(lista, 3))  // Saída: 2
console.log(contar_ocorrencias_linear(lista, 3))  // Saída: 2
